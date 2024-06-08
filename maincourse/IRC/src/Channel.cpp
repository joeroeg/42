#include "../inc/Channel.hpp"

// -------------Channel Class --------------
Channel::Channel(std::string name)
{
	this->topic = "";
    this->members = std::vector<Client*>();
    this->operators = std::vector<Client*>();
	this->invited = std::vector<Client*>();
    this->name = "#" + name;
	this->topic_protection = true;
	this->on_invite = false;
	this->password = "";
	this->limit = 0;
	this->clients_in_channel = 0;
}
Channel::~Channel(){}
Channel::Channel(const Channel& src)
{
    *this = src;
}

bool Channel::promote(Client* c) {	
	if (!c || members.empty())
		return (false);
	if (!operators.empty())
	{
		std::vector<Client*>::iterator it = std::find(operators.begin(), operators.end(), c);
		if (it != operators.end())
			return (false);
	}
	std::vector<Client*>::iterator it = std::find(members.begin(), members.end(), c);
	if (it != members.end())
		this->operators.push_back(c);	
	else
		return false;
	return true;
}

bool Channel::demote(Client* c) {	
	if (operators.empty() || !c)
		return (false);
	std::vector<Client*>::iterator it = std::find(operators.begin(), operators.end(), c);
	if (it == operators.end())
		return (false);
	this->operators.erase(it);
	return true;
}

bool Channel::is_member(Client* c) 
{
	if (members.empty() || !c)
		return (false);
	std::vector<Client*>::iterator it = std::find(members.begin(), members.end(), c);
	if (it == members.end())
		return (false);
	return (true);
}

bool Channel::is_operator(Client* c) 
{
	if (operators.empty() || !c)
		return (false);
	std::vector<Client*>::iterator it = std::find(operators.begin(), operators.end(), c);
	if (it == operators.end())
		return (false);
	return (true);
}

bool Channel::addClient(Client* c, bool ope)
{
	if (is_member(c))
		return false;
	if (this->on_invite)
	{
		std::vector<Client*>::iterator it = std::find(invited.begin(), invited.end(), c);
		if (it == invited.end())
		{
			std::cout << "cannot join because client is not invited !" << std::endl;
			return false;
		}
	}
	this->members.push_back(c);
	if (ope)
		this->operators.push_back(c);
	this->clients_in_channel++;

	// erase from invited 
	if (!invited.empty()) {
		std::vector<Client*>::iterator it = std::find(invited.begin(), invited.end(), c);
		if (it != invited.end())
			this->invited.erase(it);
	}
	return true;
}

bool Channel::addInvited(Client *c)
{
	if (!this->on_invite)
		return false;
	if (is_member(c))
		return false;
	std::vector<Client*>::iterator it = std::find(invited.begin(), invited.end(), c);
	if (it == invited.end())
	{
		this->invited.push_back(c);
		return true;
	}
	return false;
}

bool Channel::is_Invited(Client* c)
{
	std::vector<Client*>::iterator it = std::find(invited.begin(), invited.end(), c);
	if (it == invited.end())
		return false;
	return true;
}

Client * Channel::getMember_by_name(std::string name)
{
	std::vector<Client*>::iterator it = this->members.begin();
	for (it = this->members.begin(); it != this->members.end(); it++)
	{
		Client *c = (*it);
		if (c->get_client() == name)
			return c;
	}
	return NULL;
}

void Channel::removeClient(Client *c)
{
	if (!members.empty()) {
		std::vector<Client*>::iterator it = std::find(members.begin(), members.end(), c);
		if (it != members.end()) {
			this->members.erase(it);
			this->clients_in_channel--;
		}
	}
	if (!operators.empty()) {
		std::vector<Client*>::iterator i = std::find(operators.begin(), operators.end(), c);
		if (i != operators.end()) {
			this->operators.erase(i);
		}
	}
}

void Channel::broadcastAll(Client* sender, int count, ...) {
    va_list args;
    va_start(args, count);
	int i = 0;
	std::stringstream ss;
	ss << ":" << sender->get_client();
	ss << " " << "PRIVMSG";
	ss << " " << get_name() << " : ";
	while (i < count) {
		const char *arg = va_arg(args, const char *);
		if (arg == NULL) {
			break;
		}
		ss << " " << arg;
		i++;
	}
	ss << "\r\n";
	std::string response = ss.str();
	//cout << response;
	for (std::vector<Client*>::iterator it = this->members.begin(); it != this->members.end(); it++)
	{
		send((*it)->get_fd(), response.c_str(), response.size(), 0);
	}
	va_end(args);
}

void Channel::broadcastAlmostAll(Client* sender, int count, ...) {
    va_list args;
    va_start(args, count);
	int i = 0;
	std::stringstream ss;
	ss << ":" << sender->get_client();
	ss << " " << "PRIVMSG";
	ss << " " << get_name() << " : ";
	while (i < count) {
		const char *arg = va_arg(args, const char *);
		if (arg == NULL) {
			break;
		}
		ss << " " << arg;
		i++;
	}
	ss << "\r\n";
	std::string response = ss.str();
	for (std::vector<Client*>::iterator it = this->members.begin(); it != this->members.end(); it++)
	{
		if ((*it)->get_fd() != sender->get_fd())
			send((*it)->get_fd(), response.c_str(), response.size(), 0);
	}
	va_end(args);
}

void Channel::update_members_in_channel(void) {
	std::vector<Client*>::iterator ite = members.begin();
	std::string clients_nicknames = "";
	for (ite = members.begin(); ite != members.end(); ite++)
	{
		clients_nicknames += " ";
		if (is_operator(*(ite)))
			clients_nicknames += "@";
		clients_nicknames += (*ite)->get_nickname();
	}

	for (std::vector<Client*>::iterator it = members.begin(); it != members.end(); it++)
	{
		if (this->get_topic() != "")
			sendReplyMsg((*it)->get_fd(), RPL_TOPIC, (*it)->get_client().c_str(), get_name().c_str(), get_topic().c_str(), NULL);

		sendReplyMsg((*it)->get_fd(), RPL_NAMREPLY, (*it)->get_client().c_str(), "=", get_name().c_str(), ":", clients_nicknames.c_str(), NULL);
		sendReplyMsg((*it)->get_fd(), RPL_ENDOFNAMES, (*it)->get_client().c_str(), get_name().c_str(), ":End of /NAMES list",  NULL);
	}

}

std::string Channel::get_topic() {
	return (topic);
}

void Channel::set_topic(std::string new_topic) {
	topic = new_topic;
}

bool Channel::is_topic_protected(void) {
	return (topic_protection);
}

void Channel::set_topic_protected(bool protect_val) {
	topic_protection = protect_val;
}

bool Channel::is_on_invite(void) {
	return (on_invite);
}

void Channel::set_invite(bool invite_val) {
	on_invite = invite_val;
}

std::string Channel::get_password(void) {
	return (password);
}

void Channel::set_password(std::string new_password) {
	password = new_password;
}

int Channel::get_clients_nbr(void) {
	return (clients_in_channel);
}

std::string Channel::get_name(void) {
	return (name);
}

int Channel::get_limit(void) {
	return (limit);
}

void Channel::set_limit(int new_limit) {
	limit = new_limit;
}

std::vector<Client*> Channel::get_members()
{
	return this->members;
}

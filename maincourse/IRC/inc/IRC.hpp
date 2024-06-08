#ifndef IRC_HPP
# define IRC_HPP
# define _XOPEN_SOURCE_EXTENDED 1
# include <stdio.h>
# include <string>
# include <string.h>
# include <cstring>
# include <iostream>
# include <sys/socket.h>
# include <netinet/in.h>
# include <arpa/inet.h>
# include <unistd.h>
# include <map>
# include <poll.h>
# include <fcntl.h>
# include <cstdlib>
# include "Channel.hpp"
# include <vector>
# include <signal.h>
# include <cerrno>

using std::cout;
using std::cerr;
using std::endl;

class Client;
class Command;

int		create_socket_descriptor(void);
struct	sockaddr_in *set_address(char *ip, int port);
Client*	new_client(int fd, std::string username, std::string nickname);
void	login_attempt(std::map<int, Client*> &clients, int infd);
//void	broadcastAll(std::map<int, Client*>& clients, int except, char *buffer);
void	process_message(Client &client ,std::map<std::string, Command*>& commands, std::string input);
bool	check_invalid_symbols(std::string buffer);
void	not_registered_yet(int fd);
#endif

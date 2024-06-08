#ifndef CLIENT_HPP
# define CLIENT_HPP
# include "IRC.hpp"

#include "ResponseHandler.hpp"

class Client
{
    private:
        const int _fd;
        std::string _ip;
        int _port;
		std::string _username;
		std::string _nickname;
        bool _disconnected;
		bool _authentified;
		bool _registered;
        Client();
    public:
        Client(int fd, std::string ip, int port);
        Client(int fd, std::string ip, int port, std::string username, std::string nickname);
        ~Client();
        Client& operator=(const Client& src);
        Client(const Client& src);

        int get_fd();
        std::string get_ip() const;
        int get_port() const;
		std::string get_username();
		std::string get_nickname();
		std::string get_client();
		void set_username(std::string user);
		void set_nickname(std::string nick);
        bool is_disconnected();
		bool is_authentified();
		bool is_registered();
		void regist();
		void authentify();
        void disconnect();
        std::string getName();
};

#endif

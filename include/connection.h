/*
 * connection.h
 *
 *  Created on: Aug 27, 2015
 *      Author: chris
 */

#ifndef INCLUDE_CONNECTION_H_
#define INCLUDE_CONNECTION_H_

#include <iostream>
#include <string>
#include <sys/socket.h>
#include <sys/types.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <stdio.h>
#include <string.h>
#include "../gtest_source/gtest/gtest.h"

using namespace std;

class Connection{
	sockaddr_in ipv4;
	sockaddr_in6 ipv6;
	addrinfo *hints, res;
	string host;
	int socket;

	FRIEND_TEST(ConnectionTest, setup);
	bool checkIp(string ip, short int family);
	bool resolveHost(string host);
	bool checkPort(string port);
	bool connect(bool server);
	int getFamily(string family);
public:
	Connection(string host);
	Connection(string ip, string socket, string family, bool server, int socktype = SOCK_STREAM);




};



#endif /* INCLUDE_CONNECTION_H_ */

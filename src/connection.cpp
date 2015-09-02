/*
 * connection.cpp
 *
 *  Created on: Aug 27, 2015
 *      Author: chris
 */

#include "connection.h"

Connection::Connection(string host){
	memset(&hints, 0, sizeof(hints));
}

Connection::Connection(string ip, string socket, string family, bool server, int socktype){
	memset(&hints, 0, sizeof(hints));
	hints->ai_family = getFamily(family);
	hints->ai_socktype = socktype;
	hints->ai_flags = AI_PASSIVE;
	getaddrinfo()
}

bool Connection::checkIp(string ip, short int family){
	if(family == AF_INET){
		if(inet_pton(family, ip.c_str(), &ipv4) != 1){
			return false;
		}
	}
	else {
		if(inet_pton(family, ip.c_str(), &ipv6) != 1){
			return false;
		}
	}
	return true;
}

bool Connection::checkPort(string port){
	int p = stoi(port);
	if(p < 1024 || p > 65535){
		return false;
	}
	return true;
}

bool Connection::resolveHost(string host){
	return true;
}

int getFamily(string family){
	if(family == "ip4" ){
		return AF_INET;
	}
	return AF_INET6;
}

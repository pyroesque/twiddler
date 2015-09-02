/*
 * test_connection.cpp

 *
 *  Created on: Sep 1, 2015
 *      Author: chris
 */
#include "gtest/gtest.h"
#include "connection.h"

//Connection test1 ("one", "two");


TEST(ConnectionTest, setup) {
	Connection test2 ("three");
	EXPECT_TRUE(test2.checkIp("192.168.0.1", AF_INET));
	EXPECT_TRUE(test2.checkIp("::1", AF_INET6));
	EXPECT_FALSE(test2.checkIp("bad", AF_INET));
	EXPECT_FALSE(test2.checkIp("bad", AF_INET6));
	EXPECT_TRUE(test2.checkPort("5000"));
	EXPECT_FALSE(test2.checkPort("20"));
	EXPECT_FALSE(test2.checkPort("70000"));
	EXPECT_TRUE(test2.resolveHost("www.google.com"));
	EXPECT_FALSE(test2.resolveHost("error"));
}

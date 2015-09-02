/*
 * gtest_main.cpp
 *
 *  Created on: Sep 1, 2015
 *      Author: chris
 */

#include <stdio.h>
#include "gtest/gtest.h"

GTEST_API_ int main(int argc, char **argv){
	printf("Running main() from gtest_main.cpp\n");
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

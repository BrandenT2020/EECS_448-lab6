/**
*	@author
*	@date
*	@file main.cpp
*	@brief driver for LinkedList demo
*/
#include <iostream>
#include "LinkedListOfInts.h"
#include "Test.h"

int main(int argc, char** argv)
{
	//Example of declaring a LinkedListOfInts
	//LinkedListOfInts testableList;

	Test listTest;

	std::cout << "Running...";

	std::string testResult = listTest.startListTest();

	std::cout << "\nResults:";
	std::cout << testResult;

	return (0);

}

/**
*	@author Branden Taylor
*	@date 11/6/2018
*/

#ifndef TEST_H
#define TEST_H
#include <string>
#include "LinkedListOfInts.h"


using namespace std;

class Test{
	private:
		string mTestResults;

	public:
    Test();

    string startListTest();

		string testIsEmpty();

		string testSize();

		string testSearch();

		string testAddBack();

		string testAddFront();

		string testRemoveBack();

		string testRemoveFront();
};
//#include "Test.cpp"
#endif

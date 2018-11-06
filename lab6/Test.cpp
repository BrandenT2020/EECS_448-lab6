#include "Test.h"
#include "LinkedListOfInts.h"
#include <string>
#include <vector>

using namespace std;

    Test::Test(){mTestResults = "";}

    string Test::startListTest(){
      mTestResults = "";

      //mTestResults += testListTest();
      mTestResults += testIsEmpty();
      mTestResults += testSize();
      mTestResults += testSearch();
      mTestResults += testAddBack();
      mTestResults += testAddFront();
      mTestResults += testRemoveBack();
      mTestResults += testRemoveFront();

      return mTestResults;
    }

    string Test::testAddFront(){
        string fail = "\naddFront: Fail";
        string pass = "\naddFront: Pass";
        LinkedListOfInts myList;

        myList.addFront(1);
        myList.addFront(2);

        vector<int> vec = myList.toVector();

        return (vec.front() != 2) ? fail : pass;
    }

    string Test::testAddBack(){
        string fail = "\naddBack: Fail";
        string pass = "\naddBack: Pass";
        LinkedListOfInts myList;

        myList.addBack(1);
        myList.addBack(2);

        vector<int> vec = myList.toVector();

        return (vec.back() != 2) ? fail : pass;
    }

    string Test::testIsEmpty(){
        string fail = "\nisEmpty: Fail";
        string pass = "\nisEmpty: Pass";
        LinkedListOfInts myList;

        myList.addFront(1);
        myList.addFront(2);

        return (myList.isEmpty() != false) ? fail : pass;
    }

    string Test::testSize(){
        string fail = "\nsize: Fail";
        string pass = "\nsize: Pass";
        LinkedListOfInts myList;

        myList.addFront(1);
        myList.addFront(2);

        return (myList.size() != 2) ? fail : pass;
    }

    string Test::testSearch(){
        string fail = "\nsearch: Fail";
        string pass = "\nsearch: Pass";
        LinkedListOfInts myList;

        myList.addBack(1);

        vector<int> vec = myList.toVector();

        return (myList.search(1) != true) ? fail : pass;
    }

    string Test::testRemoveBack(){
        string fail = "\nremoveBack: Fail";
        string pass = "\nremoveBack: Pass";
        LinkedListOfInts myList;

        myList.addBack(1);
        myList.addBack(2);
        myList.removeBack();

        vector<int> vec = myList.toVector();

        return (vec.back() != 1) ? fail : pass;
    }

    string Test::testRemoveFront(){
        string fail = "\nremoveBack: Fail";
        string pass = "\nremoveBack: Pass";
        LinkedListOfInts myList;

        myList.addFront(1);
        myList.addFront(2);
        myList.removeFront();

        vector<int> vec = myList.toVector();

        return (vec.back() != 1) ? fail : pass;
    }

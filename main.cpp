/**
*	@author Prof. Gibbons
* @Edited Eric Seitz
*	@date	4/19/2019
*	@file main.cpp
*	@brief driver for LinkedList demo
*/
#include <iostream>
#include "LinkedListOfInts.h"
#include "TestClass.h"

int main(int argc, char** argv)
{
	//Example of declaring a LinkedListOfInts
	LinkedListOfInts testableList;

	//You won't do all the tests in main; that's what your Test class will be for
	//Example:
	//TestSuite myTester;
	//myTester.runTests();

	//Eric: Calling to all tests method in TestClass
	TestClass myTester;
	myTester.runAllTests();

	std::cout << "Running...\nAnd we're done.\nGoodbye.\n";

	return (0);

}

/**

Eric Notes:
Lab slides (useful!)
https://people.eecs.ku.edu/~m576f167/

Lab 6
https://wiki.ittc.ku.edu/ittc_wiki/index.php/EECS448:Lab6

*/

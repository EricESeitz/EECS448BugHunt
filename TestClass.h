/* -----------------------------------------------------------------------------
 *
 * File Name:  TestClass.h
 * Author: Eric Seitz
 * Assignment:   EECS-448 Lab 07
 * Description:  Testing class header file
 * Date: April 19 2019
 *
   ---------------------------------------------------------------------------- */

#ifndef TESTCLASS_H
#define TESTCLASS_H

#include <iostream>
#include "LinkedListOfInts.h"

class TestClass
{
public:
  /**
 * @pre
 * @post
 * @param
 **/
	TestClass();
	void runAllTests();
  void isEmptyTests();
  void sizeTests();
  void removeBackTests();
  void searchTests();

  void searchTest1();
	void searchTest2();
	void searchTest3();

  void removeBackTest1();
	void removeBackTest2();
	void removeBackTest3();
  void removeBackTest4();


  void sizeTest1();
  void sizeTest2();
  void sizeTest3();

	void isEmptyTest1();
	void isEmptyTest2();
};

#endif

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

  void sizeTest1();
  void sizeTest2();

	void isEmptyTest1();
	void isEmptyTest2();
};

#endif

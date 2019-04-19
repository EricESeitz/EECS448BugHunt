/* -----------------------------------------------------------------------------
 *
 * File Name:  TestClass.cpp
 * Author: Eric Seitz
 * Assignment:   EECS-448 Lab 07
 * Description: Testing class, calls test methods, prints to console
 * Date: April 19 2019
 *
   ---------------------------------------------------------------------------- */

#include <iostream>
#include "TestClass.h"

//Constructor
TestClass::TestClass()
{
}

//Default program, runs all tests
void TestClass::runAllTests()
{
test1();
test2();
}

//Test 1
void TestClass::test1()
{
  std::cout << "Test1\n";
}

//Test 2
void TestClass::test2()
{
  std::cout << "Test2\n";
}

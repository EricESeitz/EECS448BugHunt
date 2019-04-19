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
#include "LinkedListOfInts.h"


//Constructor
TestClass::TestClass()
{
}

//Default program, runs all tests
void TestClass::runAllTests()
{
  isEmptyTests();
}

void TestClass::isEmptyTests()
{
  isEmptyTest1();    //test if isEmpty returns true on empty list
  isEmptyTest2();    //test if isEmpty returns false on non-empty list
}

//Test 1
void TestClass::isEmptyTest1()
{
  LinkedListOfInts testableList;
  std::cout << "Test 1: isEmpty true on empty list\n";
  std::cout << "isEmpty: " << testableList.isEmpty() << "\n";
  std::cout << "size: " << testableList.size() << "\n";
  if(testableList.isEmpty() == false)
  {
    std::cout << "**FAILED**";
  }
  else
  {
    std::cout << "~~PASSED~~";
  }
  std::cout << "\n\n";
}

//Test 2
void TestClass::isEmptyTest2()
{
  LinkedListOfInts testableList;
  std::cout << "Test 2: isEmpty false on non-empty list\n";
  testableList.addBack(5);
  testableList.addFront(5);
  std::cout << "isEmpty: " << testableList.isEmpty() << "\n";
  std::cout << "size: " << testableList.size() << "\n";
  if(testableList.isEmpty() == true)
  {
    std::cout << "**FAILED**";
  }
  else
  {
    std::cout << "~~PASSED~~";
  }
  std::cout << "\n\n";
}

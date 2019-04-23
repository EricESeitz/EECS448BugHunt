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
#include "Node.h"


//Constructor
TestClass::TestClass()
{
}

//Default program, runs all tests
void TestClass::runAllTests()
{
  isEmptyTests();
  sizeTests();
  removeBackTests();
  searchTests();
}

void TestClass::isEmptyTests()
{
  isEmptyTest1();    //test if isEmpty returns true on empty list
  isEmptyTest2();    //test if isEmpty returns false on non-empty list
}

void TestClass::sizeTests()
{
  sizeTest1();    //test if size returns 0 on empty list
  sizeTest2();    //test if size not 0 on non-empty list
  sizeTest3();    //test if size returns 0 on list added to then removed from
}

void TestClass::removeBackTests()
{
  removeBackTest1();    //test if removeBack returns true if back element removed
  removeBackTest2();    //test if removeBack returns false on non-empty list
  removeBackTest3();    //test if removeBack only removes 1 element
  removeBackTest4();    //test if removeBack only removes element from back
}

void TestClass::searchTests()
{
  searchTest1();    //test if search returns true on searching added element
  searchTest2();    //test if search returns false on searching non-added element
  searchTest3();    //test if search returns false on empty list
}

//search Test 1
void TestClass::searchTest1()
{
  LinkedListOfInts testableList;
  std::cout << "search Test 1: returns true on searching added element\n";
  testableList.addFront(5);
  if(  testableList.search(5) == true)
  {
    std::cout << "~~PASSED~~";
  }
  else
  {
    std::cout << "**FAILED**";
  }
  std::cout << "\n\n";
}

//search Test 2
void TestClass::searchTest2()
{
  LinkedListOfInts testableList;
  std::cout << "search Test 2: returns false on searching non-added element\n";
  testableList.addFront(5);
  if(  testableList.search(7) == true)
  {
    std::cout << "**FAILED**";
  }
  else
  {
    std::cout << "~~PASSED~~";
  }
  std::cout << "\n\n";
}

//search Test 3
void TestClass::searchTest3()
{
  LinkedListOfInts testableList;
  std::cout << "search Test 3: returns false on empty list\n";
  if(  testableList.search(1) == true)
  {
    std::cout << "**FAILED**";
  }
  else
  {
    std::cout << "~~PASSED~~";
  }
  std::cout << "\n\n";
}



//----------------------------------------------------------------------------------------

//removeBack Test 1
void TestClass::removeBackTest1()
{
  LinkedListOfInts testableList;
  std::cout << "removeBack Test 1: returns true if back element removed\n";
  testableList.addBack(5);
  if(  testableList.removeBack() != true)
  {
    std::cout << "**FAILED**";
  }
  else
  {
    std::cout << "~~PASSED~~";
  }
  std::cout << "\n\n";
}

//removeBack Test 2
void TestClass::removeBackTest2()
{
  LinkedListOfInts testableList;
  std::cout << "removeBack Test 2: returns false if list is empty\n";
  if(  testableList.removeBack() != false)
  {
    std::cout << "**FAILED**";
  }
  else
  {
    std::cout << "~~PASSED~~";
  }
  std::cout << "\n\n";
}

//removeBack Test 3
void TestClass::removeBackTest3()
{
  LinkedListOfInts testableList;
  std::cout << "removeBack Test 3: removes only 1 back element (add five, expect 4)\n";
  testableList.addBack(5);
  testableList.addBack(4);
  testableList.addBack(3);
  testableList.addBack(2);
  testableList.addBack(1);

  testableList.removeBack();
  if(testableList.size() == 4)
  {
    std::cout << "Size: " << testableList.size();
    std::cout << "~~PASSED~~";
  }
  else
  {    
    std::cout << "Size: " << testableList.size();
    std::cout << "**FAILED**";
  }
  std::cout << "\n\n";
}

//removeBack Test 4
void TestClass::removeBackTest4()
{
  LinkedListOfInts testableList;
  std::cout << "removeBack Test 4: removes only back element\n(Back element: 3. Expected search result of 3 post-remove: false)\n";
  testableList.addFront(5);
  testableList.addBack(3);

  testableList.removeBack();

  if(testableList.search(3) == true)
  {
    std::cout << "**FAILED**";

  }
  else
  {    
    std::cout << "~~PASSED~~";
  }
  std::cout << "\n\n";
}

//----------------------------------------------------------------------------------------

//size Test 1
void TestClass::sizeTest1()
{
  LinkedListOfInts testableList;
  std::cout << "size Test 1: returns 0 on empty list\n";
  std::cout << "size: " << testableList.size() << "\n";
  if(testableList.size() != 0)
  {
    std::cout << "**FAILED**";
  }
  else
  {
    std::cout << "~~PASSED~~";
  }
  std::cout << "\n\n";
}

//size Test 2
void TestClass::sizeTest2()
{
  LinkedListOfInts testableList;
  std::cout << "size Test 2: returns not 0 on non-empty list\n";
  testableList.addBack(5);
  testableList.addFront(5);
  std::cout << "size: " << testableList.size() << "\n";
  if(testableList.size() == 0)
  {
    std::cout << "**FAILED**";
  }
  else
  {
    std::cout << "~~PASSED~~";
  }
  std::cout << "\n\n";
}

//size Test 3
void TestClass::sizeTest3()
{
  LinkedListOfInts testableList;
  std::cout << "size Test 3: returns 0 if list added to then removed from\n";
  testableList.addFront(5);
  testableList.removeFront();
  std::cout << "size: " << testableList.size() << "\n";
  if(testableList.size() != 0)
  {
    std::cout << "**FAILED**";
  }
  else
  {
    std::cout << "~~PASSED~~";
  }
  std::cout << "\n\n";
}

//----------------------------------------------------------------------------------------

//isEmpty Test 1
void TestClass::isEmptyTest1()
{
  LinkedListOfInts testableList;
  std::cout << "isEmpty Test 1: isEmpty true on empty list\n";
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

//isEmpty Test 2
void TestClass::isEmptyTest2()
{
  LinkedListOfInts testableList;
  std::cout << "isEmpty Test 2: isEmpty false on non-empty list\n";
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

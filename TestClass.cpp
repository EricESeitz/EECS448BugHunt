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
  std::cout << "~~~~~ Unit Testing ~~~~~\n";
  std::cout << "** addBack testing **\n\n";
  addBackTests();
  std::cout << "-------------------------------------------------------\n\n";
  std::cout << "** addFront testing **\n\n";
  addFrontTests();
  std::cout << "-------------------------------------------------------\n\n";
  std::cout << "** search testing **\n\n";
  searchTests();
  std::cout << "-------------------------------------------------------\n\n";
  std::cout << "** removeFront testing **\n\n";
  removeFrontTests();
  std::cout << "-------------------------------------------------------\n\n";
  std::cout << "** removeBack testing **\n\n";
  removeBackTests();
  std::cout << "-------------------------------------------------------\n\n";
  std::cout << "** size testing **\n\n";
  sizeTests();
  std::cout << "-------------------------------------------------------\n\n";
  std::cout << "** isEmpty testing **\n\n";
  isEmptyTests();
}

void TestClass::addFrontTests()
{
  addFrontTest1();    //test if addFront adds element to list
}

void TestClass::addBackTests()
{
  addBackTest1();    //test if addBack adds element to list
}

void TestClass::removeFrontTests()
{
  removeFrontTest1();    //test if removeFront returns true if front element removed
  removeFrontTest2();    //test if removeFront returns false on non-empty list
  removeFrontTest3();    //test if removeFront only removes 1 element
  removeFrontTest4();    //test if removeFront only removes element from front
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
  sizeTest3();    //test if calling to size after adding changes value
}

void TestClass::removeBackTests()
{
  removeBackTest1();    //test if removeBack returns true if back element removed
  removeBackTest2();    //test if removeBack returns false on non-empty list
  removeBackTest3();    //test if removeBack only removes 1 element
  removeBackTest4();    //test if removeBack only removes element from back
  removeBackTest5();    //tests if multiple removeBack calls made

}

void TestClass::searchTests()
{
  searchTest1();    //test if search returns true on searching added element
  searchTest2();    //test if search returns false on searching non-added element
  searchTest3();    //test if search returns false on empty list
}

//addBack Test 1
void TestClass::addBackTest1()
{
  LinkedListOfInts testableList;
  std::cout << "addBack Test 1: adds new element to list\n";
  testableList.addBack(5);
  if(testableList.search(5) == true)
  {
    std::cout << "~~PASSED~~";
  }
  else
  {
    std::cout << "**FAILED**";
  }
  std::cout << "\n\n";
}

//----------------------------------------------------------------------------------------

//addFront Test 1
void TestClass::addFrontTest1()
{
  LinkedListOfInts testableList;
  std::cout << "addFront Test 1: adds new element to list\n";
  testableList.addFront(5);
  if(testableList.search(5) == true)
  {
    std::cout << "~~PASSED~~";
  }
  else
  {
    std::cout << "**FAILED**";
  }
  std::cout << "\n\n";
}

//----------------------------------------------------------------------------------------

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

//removeFront Test 1
void TestClass::removeFrontTest1()
{
  LinkedListOfInts testableList;
  std::cout << "removeFront Test 1: returns true if front element removed\n";
  testableList.addFront(5);
  if(  testableList.removeFront() != true)
  {
    std::cout << "**FAILED**";
  }
  else
  {
    std::cout << "~~PASSED~~";
  }
  std::cout << "\n\n";
}

//removeFront Test 2
void TestClass::removeFrontTest2()
{
  LinkedListOfInts testableList;
  std::cout << "removeFront Test 2: returns false if list is empty\n";
  if(  testableList.removeFront() != false)
  {
    std::cout << "**FAILED**";
  }
  else
  {
    std::cout << "~~PASSED~~";
  }
  std::cout << "\n\n";
}

//removeFront Test 3
void TestClass::removeFrontTest3()
{
  LinkedListOfInts testableList;
  std::cout << "removeFront Test 3: removes only 1 front element (size 5, expect size 4)\n";
  testableList.addFront(5);
  testableList.addFront(4);
  testableList.addFront(3);
  testableList.addFront(2);
  testableList.addFront(1);

  testableList.removeFront();
  if(testableList.size() == 4)
  {
    std::cout << "Size: " << testableList.size() << "\n";
    std::cout << "~~PASSED~~";
  }
  else
  {
    std::cout << "Size: " << testableList.size() << "\n";
    std::cout << "**FAILED**";
  }
  std::cout << "\n\n";
}

//removeFront Test 4
void TestClass::removeFrontTest4()
{
  LinkedListOfInts testableList;
  std::cout << "removeFront Test 4: removes only front element\n(Front element 5, Back element: 3.\nExpected search result of search 5 post-remove: false)\n";
  testableList.addFront(5);
  testableList.addBack(3);
  testableList.removeFront();
  std::cout << "Search 5: " << testableList.search(5) << "\n";
  std::cout << "Search 3: " << testableList.search(3) << "\n";
  if(testableList.search(5) == true)
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
  std::cout << "removeBack Test 3: removes only 1 back element (size 5, expect size 4)\n";
  testableList.addBack(5);
  testableList.addBack(4);
  testableList.addBack(3);
  testableList.addBack(2);
  testableList.addBack(1);

  testableList.removeBack();
  if(testableList.size() == 4)
  {
    std::cout << "Size: " << testableList.size() << "\n";
    std::cout << "~~PASSED~~";
  }
  else
  {
    std::cout << "Size: " << testableList.size() << "\n";
    std::cout << "**FAILED**";
  }
  std::cout << "\n\n";
}

//removeBack Test 4
void TestClass::removeBackTest4()
{
  LinkedListOfInts testableList;
  std::cout << "removeBack Test 4: removes only back element\n(Front element 5, Back element: 3.\nExpected search result of search 3 post-remove: false)\n";
  testableList.addFront(5);
  testableList.addBack(3);
  testableList.removeBack();
  std::cout << "Search 5: " << testableList.search(5) << "\n";
  std::cout << "Search 3: " << testableList.search(3) << "\n";
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

//removeBack Test 5
void TestClass::removeBackTest5()
{
  LinkedListOfInts testableList;
  std::cout << "removeBack Test 5: More calls to removeBack than elements of list.\nAdd 3, 5 to back. removeBack x 5. Expected search: false\n";
  testableList.addBack(3);
  testableList.addBack(5);

  testableList.removeBack();
  testableList.removeBack();
  testableList.removeBack();
  testableList.removeBack();
  testableList.removeBack();

  std::cout << "Search 5: " << testableList.search(5) << "\n";
  std::cout << "Search 3: " << testableList.search(3) << "\n";
  if(testableList.search(3) == true || testableList.search(5) == true)
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
  std::cout << "size Test 2: returns not 0 after addBack and addFront\n";
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
  std::cout << "size Test 3: size is correct after multiple calls and adds (Expected: 3)\n";
  testableList.addFront(5);
  std::cout << "post-addFront(5) size: " << testableList.size() << "\n";
  testableList.addFront(4);
  std::cout << "post-addFront(4) size: " << testableList.size() << "\n";
  testableList.addFront(3);
  std::cout << "post-addFront(3) size: " << testableList.size() << "\n";

  if(testableList.size() != 3)
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
  std::cout << "size of list: " << testableList.size() << "\n";
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
  testableList.addFront(4);
  std::cout << "size of list: " << testableList.size() << "\n";
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

/*
 * =====================================================================================
 *
 *       Filename:  Virtual02AbstractClass.cpp
 *
 *    Description:  Basic example of Virtual Virtual02AbstractClass
 *
 *        Created:  26/07/2020
 *
 *         Author:  Maikol Guzmán mike@guzmanalan.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */

#include <iostream>  // allows program to output data to the screen

struct Base {
  virtual void doSomething() = 0;
};

struct Derived : Base {
  void doSomething() {
    
  }
};


// function main begins program execution
int main(int argc, const char *argv[]) {
  std::cout << "Welcome to the UNA! (VIRTUAL)" << std::endl;

  Derived derived;
}  // end function main
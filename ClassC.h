//
// Created by Greg LaKomski on 2/11/18.
//

#ifndef HOMEWORK4_CLASSC_H
#define HOMEWORK4_CLASSC_H

#include <iostream>
using std::cout;
using std::endl;
using std::cin;


#include "ClassB.h"
#include "ClassA.h"

class C
{
 public:
  C(){
    callC = 0;
  }
 private:
  int callC;
  void inc(){
    callC++;
  }
 protected:
  void func(int & a)
  {
    a = a * 5;
    inc();
  }
 public:
  int getC(){
    return callC;
  }
};

#endif //HOMEWORK4_CLASSC_H

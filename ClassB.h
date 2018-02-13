//
// Created by Greg LaKomski on 2/11/18.
//

#ifndef HOMEWORK4_CLASSB_H
#define HOMEWORK4_CLASSB_H

#include <iostream>
using std::cout;
using std::endl;
using std::cin;


#include "ClassA.h"

class B
{
 public:
  B(){
    callB = 0;
  }
 private:
  int callB;

  void inc(){
    callB++;
  }
 protected:
  void func(int & a)
  {
    a = a * 3;
    inc();
  }
 public:
  int getB(){
    return callB;
  }
};

#endif //HOMEWORK4_CLASSB_H

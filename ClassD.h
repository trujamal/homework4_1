//
// Created by Greg LaKomski on 2/11/18.
//

#ifndef HOMEWORK4_CLASSD_H
#define HOMEWORK4_CLASSD_H

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include "ClassC.h"
#include "ClassB.h"
#include "ClassA.h"

class D : public A, public B, public C
{

 private:
  int val;
 public:
  //Initially val is 1
  D()
  {
    val = 1;
  }


  //Implement this function
  void update_val(int new_val)
  {
    //int* s = &new_val;
    A::func(new_val);
    B::func(new_val);
    C::func(new_val);
    val = new_val;

  }
  //For Checking Purpose
  void check(int); //Do not delete this line.
};

void D::check(int new_val)
{
  update_val(new_val);
  cout << "Value = " << val << endl << "A's func called " << getA() << " times " << endl << "B's func called " << getB() << " times" << endl << "C's func called " << getC() << " times" << endl;
}

#endif //HOMEWORK4_CLASSD_H

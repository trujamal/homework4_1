//
// Created by Greg LaKomski on 2/11/18.
//

#ifndef HOMEWORK4_CLASSA_H
#define HOMEWORK4_CLASSA_H

#include <iostream>
using std::cout;
using std::endl;
using std::cin;



class A
{
 public:
  A(){
    callA = 0;
  }
 private:
  int callA;
  void inc(){
    callA++;
  }

 protected:
  void func(int & a)
  {
    a = a * 2;
    inc();
  }
 public:
  int getA(){
    return callA;
  }
};

#endif //HOMEWORK4_CLASSA_H

#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include "Node.h"
#include "Vector.h"
#include "List.h"
int main(int argc, char* argv[]){
  std::cout<<"Hello"<<std::endl;
  Vector v1(1,2);
  Vector v2(5,8);
  Node n1(v1);
  Node n2(v2);
  
  n1.set_next(&n2);
  std::cout<<n2.v()<<std::endl;
  List l;
  //List L(v1);
  return EXIT_SUCCESS;
}

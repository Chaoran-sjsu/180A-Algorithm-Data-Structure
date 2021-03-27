#include<iostream>
#include"distance.h"

int main(){
  XYPoint p1(1,5);
  XYPoint p2(9,3);
  XYPoint p3(2,2);
  XYPoint p4(1,17);
  XYPoint p5(15,9);
  std::cout<<distance(p1,p3,p4,p5)<<std::endl;
  return 0;
 }

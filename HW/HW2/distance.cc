/* 
Course: CMPE-180A
Name: Chaoran Lei
SJSU ID: 015264119
*/

#include<iostream>
#include<cmath>
#include<stdio.h>
#include"distance.h"
 
  float distance(XYPoint p1, XYPoint p2){  
        XYPoint q1 = p1;
        XYPoint q2 = p2;
  	float a = float(q1.Getx() - q2.Getx());
	float w = float(q1.Gety() - q2.Gety());
   	return sqrt(a*a + w*w);
   };


  float distance(XYPoint p1, XYPoint p2, XYPoint p3){
    XYPoint q1 = p1;
    XYPoint q2 = p2;
    XYPoint q3 = p3;
    float a = float(q1.Getx() - q2.Getx());
    float w = float(q1.Gety() - q2.Gety()); 
    float e = float(q2.Getx() - q3.Getx());
    float r = float(q2.Gety() - q3.Gety());
    return sqrt(a*a + w*w) + sqrt(e*e + r*r);
    };
    
  float distance(XYPoint p1, XYPoint p2, XYPoint p3, XYPoint p4){
    XYPoint q1 = p1;
    XYPoint q2 = p2;
    XYPoint q3 = p3;
    XYPoint q4 = p4;
    float a = float(q1.Getx() - q2.Getx());
    float w = float(q1.Gety() - q2.Gety()); 
    float e = float(q2.Getx() - q3.Getx());
    float r = float(q2.Gety() - q3.Gety());
    float t = float(q3.Getx() - q4.Getx());
    float u = float(q3.Gety() - q4.Gety());
    return sqrt(a*a + w*w) + sqrt(e*e + r*r) + sqrt(t*t + u*u);
    };
  
  
  float distance(XYPoint p1, XYPoint p2, XYPoint p3, XYPoint p4, XYPoint p5){
    XYPoint q1 = p1;
    XYPoint q2 = p2;
    XYPoint q3 = p3;
    XYPoint q4 = p4;
    XYPoint q5 = p5;
    float a = float(q1.Getx() - q2.Getx());
    float w = float(q1.Gety() - q2.Gety()); 
    float e = float(q2.Getx() - q3.Getx());
    float r = float(q2.Gety() - q3.Gety());
    float t = float(q3.Getx() - q4.Getx());
    float u = float(q3.Gety() - q4.Gety());
    float i = float(q4.Getx() - q5.Getx());
    float o = float(q4.Gety() - q5.Gety());
    return sqrt(a*a + w*w) + sqrt(e*e + r*r) + sqrt(t*t + u*u) + sqrt(i*i + o*o);
    };

/*
int main(){
  XYPoint p1(1,5);
  XYPoint p2(9,3);
  XYPoint p3(2,2);
  std::cout<<distance(p1,p2,p3)<<std::endl;
  return 0;
 }*/

/* 
Course: CMPE-180A
Name: Chaoran Lei
SJSU ID: 015264119
*/
#ifndef distance_h
#define distance_h

class XYPoint{
  private:
  int a,b;
  public:
  XYPoint(int x=0, int y=0){
    a = x;
    b = y;
  }
  int Getx(){
    return a;
  };
  int Gety(){
    return b;
   };
 };
 
float distance(XYPoint p1, XYPoint p2);
float distance(XYPoint p1, XYPoint p2, XYPoint p3);
float distance(XYPoint p1, XYPoint p2, XYPoint p3, XYPoint p4);
float distance(XYPoint p1, XYPoint p2, XYPoint p3, XYPoint p4, XYPoint p5);

#endif

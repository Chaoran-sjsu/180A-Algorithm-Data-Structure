#include<iostream>
#include"HW1.h"
using namespace std;

int main(){
  int t[] = {11,7,9,1,8};
  
  //int b = sizeof(t)/sizeof(t[0]);
  int b = 5;
  
  cout<<"sorted array is"<<endl;
  cmpe180ASort(t, b);
  for (int i=0;i<b;i++)
  cout << t[i] << endl;
  return 0;
  
  
  /*char c[] = "comeemkjsadg";
  int d = sizeof(c)/sizeof(c[0]);
  
  cout<<"sorted string is"<<endl;
  cmpe180ASort(c, d);
  for (int j=0;j<d;j++)
  cout << c[j] << endl;
  return 0;  */
  
}


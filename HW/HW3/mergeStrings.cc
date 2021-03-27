/* 
Course: CMPE-180A

Name: Chaoran Lei
SJSU 
ID: 015264119
*/



#include<iostream>
#include<stdio.h>
#include<string>

using namespace std;

#include"mergeStrings.h"



string mergeStrings(const string &a, const string &b){
  
int len1 = a.size(), len2 = b.size(), i=0, j=0;
  
string res = "";
  
while (i<len1 || j<len2){
      
if (i<len1)
          
res.push_back(a[i++]);
      
if (j<len2)
          
res.push_back(b[j++]);
  }
  
return res;
};


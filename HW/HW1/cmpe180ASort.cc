/* 
Course: CMPE-180A
Name: Chaoran Lei
SJSU ID: 015264119
*/

#include<iostream>
#include"cmpe180ASort.h"
using namespace std;

void cmpe180ASort(int a[], int sz) {
   int i, j, temp;
   for (i = 0; i < sz - 1; i++) {
      for (j = i + 1; j < sz; j++){
          if (a[i] > a[j]){
             int temp = a[i];
             a[i] = a[j];
             a[j] = temp;
          }
      }
   }
}

void cmpe180ASort(char c[], int sz){
    int i, j, temp;
    for (i = 0; i < sz - 1; i++) {
        for (j = i + 1; j < sz; j++){
          if (c[i] > c[j]){
             char temp = c[i];
             c[i] = c[j];
             c[j] = temp;
            }
        }
    }    
}

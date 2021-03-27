/*
time complexicy: O(n^2)
space complexicy: O(1)
*/
#include<iostream>
#include <vector>
#include <string>
#include "countHits.h"
using std::cout;
using std::endl;
using std::vector;

int countHits(vector<Asteroid>a){

    int l = a.size();
    int count = 0;
    int i, j;
    
    for(i = 0;i < l; i++){
        if(a[i].m < 0){
            std::cerr<<"Please check your input." << endl;
            exit(-1);
        }
    }
    
    for(i = 0;i < l; i++){
        if(a[i].m == -1||a[i].d == left)
            continue;
        for(j = i+1;j < l; j++){
            if(a[i].d == right && a[j].d == left){
	        if(a[j].m != -1 && a[i].m < a[j].m)
	            break;
                else if (a[j].m != -1 && a[i].m > a[j].m)
                    a[j].m = -1;
            }
        }
    if(j == l)
        count++;
    }
    return count;
}    


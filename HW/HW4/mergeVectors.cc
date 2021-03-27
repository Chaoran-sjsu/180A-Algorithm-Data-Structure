/* 
Course: CMPE-180A

Name: Chaoran Lei

SJSU ID: 015264119
*/



#include<iostream>

#include<vector>

#include"mergeVectors.h"

using std::vector;



vector<int> mergeVectors(const vector<int> &a, const vector<int> &b){
    
     int n = a.size();
    
     int m = b.size();
    
     int t = n + m;
    
     vector<int> c(t);
    
     int i = 0, j = 0, k = 0;
    
     while (i < n && j < m){
        
        if (a[i] < b[j])
            
	    c[k++] = a[i++];
        
        else
            
            c[k++] = b[j++];
    
     }
    
     while (i < n)
        
        c[k++] = a[i++];
    
     while (j < m)
        
        c[k++] = b[j++];
    
     return c;
}


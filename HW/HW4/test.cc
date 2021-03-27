#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
#include"mergeVectors.h"

int main(){
    
    vector<int> x = {1,4,7};
    vector<int> y = {2,7};
    vector<int> res = mergeVectors(x,y);
    for (int i = 0; i < res.size(); ++i)
        
    std::cout << res[i] ;
    std::cout << std::endl;
    return 0;
}

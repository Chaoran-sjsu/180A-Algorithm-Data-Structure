#include <iostream>
#include <vector>
#include <string>
#include "countHits.h"
using std::cout;
using std::endl;
using std::string;
using std::vector;

const int points_per_test = 10;
void testCountHits(const string &test_name, 
                   const vector<Asteroid> &a,   
                   int expected_hits, 
                   int points_for_this_test,                   
                   int &total_grade) {    
    if (countHits(a) == expected_hits) {        
        total_grade += points_for_this_test;        
        cout << test_name + " succeeded! +" << points_for_this_test << endl;    
    } 
    else {        
        cout << test_name + " failed!" << endl;    
    }
}

int main() {    
    int total_grade = 0;    
    vector<Asteroid> a1 = {{5, right}, {10, right}, {5, left}};    
    string test10("Test1.0");    
    testCountHits(test10, a1, 2, points_per_test, total_grade);
    
    cout << "TOTAL GRADE=" << total_grade << endl;
}

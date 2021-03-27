#include <iostream>
#include <string>
#include <vector>
#include "mergeVectors.h"
using std::cout;
using std::endl;
using std::string;
using std::vector;

const int points_per_test = 10;

void testTwoVectors(const string &test_name, const vector<int> &v1, const vector<int> &v2,
                   const vector<int> &expected_vector, int points_for_this_test,
                   int &total_grade) {

    if (mergeVectors(v1, v2) == expected_vector) {
        total_grade += points_for_this_test;
        std::cout << test_name + " succeeded! +" << points_for_this_test << endl;
    } else {
        std::cout << test_name + " failed!" << endl;
    }
}

int main() {

    int total_grade = 0;

    std::vector<int> v1 = { 1, 2, 5};
    std::vector<int> v2 = { 1, 2, 3};
    std::vector<int> v3 = { 1, 1, 2, 2, 3, 5};
    string test10("Test1.0:Two equal length vectors");
    testTwoVectors(test10, v1, v2, v3, points_per_test, total_grade);

    cout << "TOTAL GRADE=" << total_grade << endl;
}

/*
 Name: Brian Drennan
 Class: CECS 282-05
 Project Name: Prog 2 - myDate
 Due Date: 10/04/2018
 */

#include <iostream>
#include "myDate.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    
    myDate d1 = myDate(3, 1, 2018);
    myDate d2 = myDate(2, 29, 2020);
    cout << d2.dayOfYear();
    
    
    return 0;
}

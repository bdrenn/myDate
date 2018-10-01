//
//  main.cpp
//  myDate
//
//  Created by Brian Drennan on 10/1/18.
//  Copyright © 2018 Brian Drennan. All rights reserved.
//

#include <iostream>
#include "myDate.hpp"

using namespace std;

int main(int argc, const char * argv[]) {

    int I = 2018;
    int J = 10;
    int K = 1;
    
    int JD= K-32075+1461*(I+4800+(J-14)/12)/4+367*(J-2-(J-14)/12*12)/12-3*((I+4900+(J-14)/12)/100)/4;
    
    cout << JD;
    
    
    return 0;
}

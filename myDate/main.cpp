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
    
    myDate d1 = myDate(2, 29, 2018);
    d1.display();
    cout << d1.dayName();
    
    
    return 0;
}

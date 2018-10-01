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
    
    myDate d1 = myDate(10, 1, 2018);
    myDate d2 = myDate(10, 1, 2017);
    d1.decreaseDate(1);
    d1.display();
    
    return 0;
}

//
//  myDate.cpp
//  myDate
//
//  Created by Brian Drennan on 10/1/18.
//  Copyright © 2018 Brian Drennan. All rights reserved.
//

#include "myDate.hpp"

void  J2G(int JD, int &m, int &d, int &y){
    

}

int G2J(int d, int m, int y){
    int I = 0;
    int J = 0;
    int K = 0;
    
    int JD= K-32075+1461*(I+4800+(J-14)/12)/4+367*(J-2-(J-14)/12*12)/12-3*((I+4900+(J-14)/12)/100)/4;
    
    return JD;
}

myDate::myDate(){
    month = 5;
    day = 11;
    year = 1959;
}

myDate::myDate(int m, int d, int y){
    
    
}



/*
 Name: Brian Drennan
 Class: CECS 282-05
 Project Name: Prog 2 - myDate
 Due Date: 10/04/2018
 */

#ifndef myDate_hpp
#define myDate_hpp

#include <string>
#include <stdio.h>

using namespace std;

class myDate{
private:
    int month;
    int day;
    int year;
public:
    myDate(); //default constuctor setting Date to May 11, 1959
    myDate(int month, int day, int year); //override constructor
    void display(); //display the date in format (Month Day, Year)
    int daysBetween(myDate D); //return positive or negative value based on future or past date
    string dayName(); //returns Monday, Tuesday, etc...
    void increaseDate(int num); //increase date by n days
    void decreaseDate(int num); //decrease date by n days
    int getMonth(); //return month
    int getDay(); //return day
    int getYear(); // returns year
    int dayOfYear(); //returns the number day since year began
};

#endif /* myDate_hpp */

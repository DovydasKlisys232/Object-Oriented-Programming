/*
Student: Dovydas Klisys
ID: B00165094
Date: 19 mar 2025
Purpose: this is a harness code to test the date and time classes in the scheduler.h file.
this is from part 1 of the assignment.
*/

#include<iostream>
#include "scheduler.h"

using namespace std;
using namespace scheduler;

int main() {
    try 
    {
        Date d(2005, Date::dec, 22);
        Time t(12, 22);
        cout << d << " " << t << "\n";
        Date d2(2012, Date::apr, 2);
        Time t2(23, 0);
        cout << d2 << " " << t2 << "\n";
    } 
    catch(Time::Bad_time) 
    {
        cerr << "Bad time.\n";
    }
    catch(Date::Bad_Date)
    {
        cerr << "Bad Date.\n";
    }

    return 0;

}
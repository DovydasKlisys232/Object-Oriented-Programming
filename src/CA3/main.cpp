/*
Student: Dovydas Klisys
ID: B00165094
Date: 19 mar 2025
Purpose: this is a program that utilizes the scheduler header file to create meetings and events. It reads the contents of meeting records into a vector of meeting objects.
A function load() is defined in a seperate cpp file but is used here to extract the text from the text file.
*/

#include<iostream>
#include<fstream>
#include<vector>
#include<sstream>
#include "scheduler.h"

using namespace std;
using namespace scheduler;

int main()
{
    vector<Meeting> mt = load("schedule_5meetings.txt") ;
    for ( unsigned i=0; i<mt.size(); i++) {

        cout << mt[i] << "\n\n";

    }
    
    return 0;
}
/*
Student: Dovydas Klisys
ID: B00165094
Date: 18 Mar 2025
Purpose: this is a simple program that will read from myfile.txt. It will read th time and temperature into a reading object. There will be exception handeling
for opening the file and for bad hour.
*/

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class bad_hour { };

struct Reading 
{
    double time;
    double temperature;
    Reading(double h, double t) : time(h), temperature(t) { }
};

// Overload the << operator for Reading
ostream& operator<<(ostream& os, const Reading& r) {
    os << "Time: " << r.time << ", Temperature: " << r.temperature;
    return os;
}

int main()
{
    ifstream ist("myfile.txt");
    if (!ist) {
        cerr << "Error opening file!\n";
        return 1;
    }

    vector<Reading> temps;

    // read, check and store until end of file
    int time;
    double temperature;
    while (ist >> time >> temperature) 
    {
        if (time < 0 || 23 <time) 
        {
            cerr << "hour out of range\n";
        }
        temps.push_back( Reading(time,temperature) );
    }
    ist.close();

    for(int i=0; i < temps.size(); i++)
    {
        cout << temps[i] << "\n";
    }
    return 0;
}
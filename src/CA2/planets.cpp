/*
Student: Dovydas Klisys
ID: B00165094
Date: 9 mar 2025
Purpose: this program will set up the initial positions of the sun, earth and moon and then showcase their new positions every day as the earth and moon rotate
around the sun. The program will end with the final position of the moon.
*/
#include "point.h" //linking the point header file, defined in part a
#include <iostream> //used for standard library functions
#include<iomanip> //used for precision function

//namespaces defined
using namespace geom;
using namespace std;

//macros for days of the year and days for moon to make full rotation
#define year 365
#define moon_days 27.3

//first the initial positions of the sun, earth and moon are set
//then the main program loops through each day of the year.
//the angle that the earth rotates by accross the sun is calculated 'earth_angle'
//same is done for the moon as it rotates around the earth
//precision is set at 4 decimal points, it also prints out the position of the earth and moon after each day
//after the program has looped through each day of the year, it prints out the final position of the moon
int main() {
    point sun(0,0);
    point earth(193000000,0);
    point moon(193384000,0);

    for(int day=0; day <= year; day++)
    {
        double earth_angle = day * ((2*M_PI) / year); 
        double moon_angle = day * ((2*M_PI) / moon_days);

        earth.rotate(sun, earth_angle);
        moon.rotate(earth, moon_angle);

        cout<<fixed<<setprecision(4);
        cout<<"day: "<<day<<"\n"
            <<"earth: "<<earth
            <<"\n"<<"moon: "<<moon
            <<"\n|---------------------------------------|\n";
    }

    cout<<"final moon position: "<<moon<<"\n";

    return 0;
}

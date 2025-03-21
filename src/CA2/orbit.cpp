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
#define moon_days 27

//first the initial positions of the sun, earth and moon are set
//then the main program loops through each day of the year.
//the angle that the earth rotates by accross the sun is calculated 'earth_angle'
//moon is rotated around the sun aswell, to make it stay same distance away from earth (0.384)
//moon is rotated around the earth by its won angle 'moon_angle'
//precision is set at 3 decimal points, it also prints out the position of the earth and moon after each day
//after the program has looped through each day of the year, it prints out the final position of the moon
int main() {
    point sun(0,0);
    point earth(193.00,0);
    point moon(193.00,0);

    moon.translate(0.384,0);

    double earth_angle = ((2*M_PI) / year); 
    double moon_angle = ((2*M_PI) / moon_days);

    cout<<fixed<<setprecision(3);
    cout<<"Earth"<<setw(25)
        <<"Moon\n"<<earth
        <<setw(10)<<moon<<"\n";

    for(int day=1; day <= year; day++)
    {
        earth.rotate(earth_angle);
        moon.rotate(earth_angle);
        moon.rotate(earth, moon_angle);

        cout<<fixed<<setprecision(3);
        cout<<earth<<setw(10)<<moon<<"\n";
    }

    cout<<"final moon position: "<<moon<<"\n";

    return 0;
}

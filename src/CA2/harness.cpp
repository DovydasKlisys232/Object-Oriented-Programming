/*
Student: Dovydas Klisys
ID: B00165094
Date: 6 mar 2025
Purpose: This is the test harness that will check that every member function in the point class works as intended to.*/

#include<iostream>
#include <math.h> // for pi
using namespace std;

#include"point.h"
using namespace geom;

int main()
{
    point p1(3.0,5.0) ;

    p1.translate( -1.0, 1.0 ) ;

    cout << p1 << "\n"; //should print (2, 6)

    point p2(p1) ;

    cout << p2 << "\n"; //should print (2,6)

    p2.rotate( (point){1,1}, 90*M_PI/180 ) ;

    cout << p2 << "\n"; //should print (-4,2)

    cout << p1.distance(p2) << "\n"; //should print 7.2111

    return 0;
}
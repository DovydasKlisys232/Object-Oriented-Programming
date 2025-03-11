#ifndef __POINT_H__
#define __POINT_H__

#include<iostream>
#include<cmath>

using namespace std;

namespace geom
{
    class point{
        private:
            double x_cord;
            double y_cord;
        public:
            //constuctor that takes in x and y co-ordinates as arguments
            point(double x, double y) : x_cord(x), y_cord(y) {}

            //point object that takes in anther point
            point(point& p_new) : point(p_new.x_cord, p_new.y_cord) {}

            //getter function which returns the x and y co-ordinates of a point
            double x() {return x_cord;} 
            double y() {return y_cord;}

            //getter function which returns an angle (in rads) between the point and origin
            double angle() {return atan2(y_cord,x_cord);}

            //function that returns the distance between the point and the origin
            double radius() {return hypot(x_cord, y_cord);}

            //function that returns the distance between the point and another point
            double distance(point& p2) 
            {
                double dx = x_cord - p2.x_cord;
                double dy = y_cord - p2.y_cord;
                return hypot(dx, dy);
            }

            //function to move the point by its differences (dx, dy)
            void translate(double dx, double dy) 
            {
                x_cord += dx;
                y_cord += dy;
            }

            //overloaded operator that prints the x and y co-ordinates in a clear format
            //defined as a friend so that it can utilize private members
            friend ostream& operator<<(ostream& os, const point &p)
            {
                return os << '(' << p.x_cord << ',' << p.y_cord << ')';
            }

            //rotation function
            //first calculates angle to be used in rotation formula
            //original point is translated back to origin
            //rotation formula is applied
            //point translated back to original location relative to origin
            void rotate(const point& center, double angle) 
            {
                double s = sin(angle);
                double c = cos(angle);

                x_cord -= center.x_cord;
                y_cord -= center.y_cord;

                double x_new = x_cord * c - y_cord * s;
                double y_new = x_cord * s + y_cord * c;

                x_cord = x_new + center.x_cord;
                y_cord = y_new + center.y_cord;
            }
    };
}

#endif // __POINT_H__
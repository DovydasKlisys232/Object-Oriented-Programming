#ifndef __POINT_H__
#define __POINT_H__

#include<iostream>
#include<cmath>

using namespace std;

namespace geom
{
    class point{
        //private members for gathering co-ordinates, set as double for more precise co-ordinates
        private:
            double x_cord;
            double y_cord;
        public:
            //constuctor that takes in x and y co-ordinates as arguments
            point(double x, double y) : x_cord(x), y_cord(y) {}

            //point object that takes in anther point
            point(point& p_new) : point(p_new.x_cord, p_new.y_cord) {}

            //getter function which returns the x and y co-ordinates of a point
            double x() const {return x_cord;} 
            double y() const {return y_cord;}

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
            friend ostream& operator<<(ostream& os, point &p)
            {
                return os << '(' << p.x_cord << ',' << p.y_cord << ')';
            }

            //rotation function for rotating earth around the sun (origin)
            //utilizes radius and the angle to make rotation
            //produces a new x co-ordinate and y co-ordinate after rotation formula
            //overwrites the x and y co-ordinates with new values
            void rotate(double theta)
            {
                double r = radius();
                double new_angle = theta + angle();
                
                x_cord = r * cos(new_angle);
                y_cord = r * sin(new_angle);
            }

            //rotation function for rotating the moon around the earth
            //first calculates angle to be used in rotation formula
            //original point is translated back to origin
            //rotation formula is applied
            //point translated back to original location relative to origin
            void rotate(const point& p, double theta) 
            {
                translate(-p.x(), -p.y());
                rotate(theta);
                translate(p.x(), p.y());
            }
    };
}

#endif // __POINT_H__
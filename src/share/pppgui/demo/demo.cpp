/*
Student: Dovydas Klisys
ID: B00165094
Date: 1 apr 2025
Purpose: This is a demo code to test one of the examples on the pppgui lecture, a makefile is made to compile this code
following the same template as the previous triangle code.*/

#include "Simple_window.h"
#include "Graph.h"

using namespace Graph_lib;

int main()
{

    Point tl(100,100);           // top left corner of window at 100px,100px
    Simple_window win(tl,600,400,"Canvas"); //sets the size of window with name MyWindow

    Axis xa(Axis::x, Point(50,350), 280, 10, "x axis"); //creates an axis (1: horizontal x-axis line, 2:axis start point, 3:axis length, 4:number of notches, 5: label text)
    cout << xa.label.label() << ' ' << xa.label.font_size()
                  << ' ' << xa.label.font().as_int()<< '\n';
    xa.label.set_font_size(14);          // Larger font
    xa.label.set_color(Color::dark_red); // Visible color
    win.set_label("Canvas #2"); //new window title

    win.set_label("Canvas #3");
    Axis ya(Axis::y, Point(50,350), 280, 10, "y axis"); //same as above but creates y-axis
    ya.label.set_font_size(14);          // Larger font
    ya.label.set_color(Color::dark_red); // Visible color

    // attach axis xa to the window
    win.attach(xa);
    // attach axis ya to the window
    win.attach(ya);

    win.set_label("Canvas #4");
    // sine curve
    // plot sin() in the range [0:100)
    // with (0,0) at (20,150)
    // using 1000 points
    // scale x values *50, scale y values *50
    Function sine(sin,0,100,Point(50,180),1000,50,50);
    win.attach(sine);

    win.set_label("Canvas #5");
    // I changed my mind about sine’s color
    sine.set_color(Color::blue);
    // a polygon, a Polygon is a kind of Shape
    // three points makes a triangle
    Polygon poly;
    poly.add(Point(300,200));
    poly.add(Point(350,100));
    poly.add(Point(400,200));
    poly.set_color(Color::red);
    poly.set_style(Line_style::dash);
    win.attach(poly);

    win.set_label("Canvas #6");
    Rectangle r(Point(200,200), 100, 50);
    win.attach(r);

    Closed_polyline poly_rect;
    poly_rect.add(Point(100,50));
    poly_rect.add(Point(200,50));
    poly_rect.add(Point(200,100));
    poly_rect.add(Point(100,100));
    win.set_label("Canvas #6.1");
    win.attach(poly_rect);

    // now poly_rect has 5 points
    poly_rect.add(Point(50,75));
    win.set_label("Canvas #6.2");

    // color the inside of the rectangle
    r.set_fill_color(Color::yellow);
    // make the triangle fat
    poly.set_style(Line_style(Line_style::dash,4));
    poly_rect.set_fill_color(Color::green);
    poly_rect.set_style(Line_style(Line_style::dash,2));
    win.set_label("Canvas #7");

    // add text
    Text t(Point(100,150),"Hello, graphical world!");
    t.set_font_size(20);  // Recommended minimum size
    t.set_font(Font::times_bold);
    win.set_label("Canvas #8");
    win.attach(t);

    // open an image file
    Image ii(Point(100,50),"C:/Users/dovyd/OneDrive - Technological University Dublin/Pictures/Screenshots/wallpaper1.jpg");
    win.attach(ii);
    win.set_label("Canvas #10");

    ii.move(100,200);
    win.set_label("Canvas #11");

    Circle c(Point(100,200),50);
    win.attach(c);
    Ellipse e(Point(100,200), 75,25);
    win.attach(e);
    e.set_color(Color::dark_red);
    Mark m(Point(100,200),'x');
    
    ostringstream oss;
    oss << "screen size: " << x_max() << "*" << y_max()
        << "; window size: " << win.x_max()
        << "*" << win.y_max();
    Text sizes(Point(100,20),oss.str());
    sizes.set_font_size(16);
    win.attach(sizes);

    win.set_label("Canvas #12");

    win.wait_for_button();
    return 0;
}
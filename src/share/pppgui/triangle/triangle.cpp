//
// This is example code from Chapter 12.3 "A first example" of
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
//

#include "Simple_window.h"
#include "Graph.h"

int main()
{
    using namespace Graph_lib;

    Point tl(100,100);           // top left corner of window at 100px,100px
    Simple_window win(tl,600,400,"Canvas"); //sets the width of the window with title Canvas

    Graph_lib::Polygon poly; //creates an empty polygon
    //defines each point on triangle
    poly.add(Point(300,200));
    poly.add(Point(350,100));
    poly.add(Point(400,200));

    poly.set_color(Color::dark_magenta); //sets the color of the border on triangle

    win.attach (poly); //adds polygon to the window

    // give control to the display engine
    win.wait_for_button();
}

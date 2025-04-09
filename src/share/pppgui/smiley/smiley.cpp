/*
Student: Dovydas Klisys
ID: B00165094
Date: 2 april 2025
Purpose: This code will display a smiley face that can be created by using a custom class.This class will inherit from previously defined classes.
*/

#include "Simple_window.h"
#include "Graph.h"
#include<iostream>

using namespace Graph_lib;

//Smiley is a class that publicaly derives from Circle class
//Lines object called features is used for creating mouth and other lines
//Smiley constructor takes in the Circle constructor to initialize circle parameters and add lines for face features
//draw_lines function will make the face features visible when Smiley object added to win.attach()
class Smiley : public Circle { 
	private:
		Lines features; 
	public:
	    Smiley(Point cc, int rr) : Circle(cc, rr){
	    	features.add(Point(cc.x-10, cc.y+30), Point(cc.x+10, cc.y+30));
	    	features.add(Point(cc.x-10, cc.y), Point(cc.x-10, cc.y+10));  
	    	features.add(Point(cc.x+10, cc.y), Point(cc.x+10, cc.y+10));
	    }
	    
	    void draw_lines() const 
	    {
	    	features.draw_lines();
	    	Circle::draw_lines(); 		
	    }
};

class SmileyHat : public Smiley {
	private:
		Rectangle hat;
		Rectangle top;
	public:
		SmileyHat(Point cc, int rr) : Smiley(cc, rr), hat(Point(cc.x - 50, cc.y - 70), 100, 20), top(Point(cc.x - 10, cc.y - 130), 20, 60){}

		void draw_lines() const
		{
			hat.draw_lines();
			top.draw_lines();
		}
};

// screen coordinate (100,100) top left of window
// window size(600*400)
// title: Canvas
int main() {
    Simple_window win(Point(100,100),600,400,"Canvas");
    
    Smiley s( Point(150,150), 50 );
    win.attach(s);

	SmileyHat sh( Point(150,150), 50 ) ;
    win.attach (sh);

    win.wait_for_button();
    return 0;
}

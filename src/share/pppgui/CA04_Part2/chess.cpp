/*
Student: Dovydas Klisys
ID: B00165094
Date: 9 april 2025
Purpose: This is the code for part2 of CA04.
*/

#include "Simple_window.h"
#include "Graph.h"
#include<iostream>

using namespace Graph_lib;

class BadChessboardException { };

class Chessboard : public shape
{
    private:
        Rectangle square;
    public:
        Chessboard (Point cc) : cc(Point(x,y)), 
        {
			for(i=0;i<=8;i++)
			{
				square.add(Point(cc.x+10, cc.y+10), 10, 10);	
			}
        }
		void draw_lines() const
		{
			for(i=0;i<=8;i++)
			{
				square.draw_lines();	
			}
			Rectangle::draw_lines();	
		}
};

int main()
{
    Simple_window win(Point(100,100), 600, 400, "Chessboard");

    try {
        // Top-left point only
        Chessboard c1( Point(20,20) ) ;
        win.attach (c1);

        // Top-left point, width, height and number of squares along a side
      //  Chessboard c2( Point(140, 140), 160, 160, 10 ) ;
       // win.attach (c2);

        // As before, plus the 'black' and 'white' colours
       // Chessboard c3( Point(340,200), 120, 120, 6, Color::red, Color::yellow ) ;
       // win.attach (c3);
    } 
    catch (BadChessboardException e) {
        cerr << "Bad chessboard.\n";
    }

    win.wait_for_button();
    return 0;
}

/*
Student: Dovydas Klisys
ID: B00165094
Date: 9 april 2025
Purpose: This is the code for part2 of CA04. It contains a chessboard class that can be used to produce a chessboard in different ways. The first way just specifies the chessboards top left point
but already has default heigth, width and number of squares.The second way you can make a chessboard is by specifying all these parameters but the chessboard comes out with default colors.
Final way includes color options.
*/

#include "Simple_window.h"
#include "Graph.h"
#include <vector>
#include <iostream>

using namespace Graph_lib;

class BadChessboardException { };

class Chessboard : public Shape
{
    private:
    	Vector_ref<Rectangle> squares; //used to allocate memory for Rectangle objects
    	Rectangle board; //the outline of the chessboard
    	int height; //heigth of outline
    	int width; //width of outline
    	int square_size; //size of the squares inside the chessboard
    public:
    	//constructor 1: just top left point defined
    	//comes with default height, width,  number of squares and color scheme
       	Chessboard (Point tl) : Chessboard(tl, 80, 80, 8, Color::black, Color::white){}
       	
     	//constructor 2: top left point, width, height and number of squares per row defined
     	//comes with default color scheme
		Chessboard (Point tl, int width, int height, int sz) : Chessboard(tl, width, height, sz, Color::black, Color::white){}

		//constructor 3: top left point, width, height, number of squares per row, color 1 and color 2 defined
		//This is the main chessboard constructor that takes in a every parameter 
		Chessboard (Point tl, int width, int height, int sz, Color c1, Color c2) : board(Point(tl.x, tl.y), width, height), square_size(sz)
		{
			//checks if the chessboard has even width and height, if not then the chessboard can't be made with normal number of squares
			if(width != height || (width <= 0 || height <= 0))
			{
				throw BadChessboardException();
			}
			
			board.set_color(Color::black); //chessboard outline is set to black
			int count = 0; //variable that counts the number of squares in the chessboard, used to determine the color scheme
			
			//calculates the width and height of the squares inside the chessboard outline
			int square_dimension = width / sz;

			//this code creates the chessboard's rows and columns in the correct pattern and number of squares
			for(int y = 0; y < sz; y++)
			{
				for(int x = 0; x < sz; x++)
				{
					//this line stores the pointers to a rectangle object into squares vector, used to then print out onto chessboard
					//rest of code determines the color scheme of the chessboard, one color then other color.
					squares.push_back(new Rectangle(Point(tl.x + x*square_dimension, tl.y + y*square_dimension), square_dimension, square_dimension));
					if(y%2 == 0)
					{	
						if(x%2 ==0)
							squares[count].set_fill_color(c2);
						else
							squares[count].set_fill_color(c1);
					}
					else if(y%2 != 0)
					{
						if(x%2 == 0)
							squares[count].set_fill_color(c1);
						else
							squares[count].set_fill_color(c2);
							
					}
					count += 1;
				}
			}
		}

     	//prints out the chessboard outline with all its squares onto the window
		void draw_lines() const
		{
			board.draw_lines();
			for(int i=0; i<squares.size(); i++)
			{
				squares[i].draw_lines();
			}		
		}
};

//
int main()
{
    Simple_window win(Point(100,100), 600, 400, "Chessboard");

	// Top-left point only
    Chessboard c1( Point(20,20) ) ;

    // Top-left point, width, height and number of squares along a side
    Chessboard c2( Point(140, 140), 160, 160, 10 ) ;

    // As before, plus the 'black' and 'white' colours
    Chessboard c3( Point(340,200), 120, 120, 6, Color::red, Color::yellow ) ;
    try {
        
        win.attach (c1);

        
        win.attach (c2);

        
        win.attach (c3);
    } 
    catch (BadChessboardException e) {
        cerr << "Bad chessboard.\n";
    }

    win.wait_for_button();
}

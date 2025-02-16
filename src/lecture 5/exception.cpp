// Garret Brady 26/2/2013
// OOP lecture 4 errors
// Exception demo

#include <iostream>

using namespace std;

class Bad_area { }; // a class is a user defined type
// Bad_area is a type to be used as an exception
int area(int length, int width)
{
if (length<=0 || width<=0) throw Bad_area(); // note the ()
return length*width;
}

int main() 
{
	try 
	{
		cout << area(10, 3) << '\n'; // 30
		cout << area(5, -7) << '\n'; // 15
		cout << area(10, 3) << '\n'; // never gets to here
	}
	catch(Bad_area)
	{
		cerr<<"oops! Bad area calculation\n";
	}
	
	return 0 ;
}
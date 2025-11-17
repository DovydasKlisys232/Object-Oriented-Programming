#include <iostream>
using namespace std;

class bad_area{ };

// library code
int area(int length, int width)
{
    if (length<=0 || width<=0) {
        throw bad_area();
    }
    return length*width;
}

// client code
int main()
{
    try
    {
        int a = area(-10, 3);
        cout << a << "\n";
    }
    catch(bad_area)
    {
        cerr << "Bad area.\n";
    }
    return 0;
}

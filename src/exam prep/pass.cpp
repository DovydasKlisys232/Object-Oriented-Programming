#include <iostream>
using namespace std;

int f(int a) { a = a+1; return a; }

int g(int &a) { a = a+1; return a; }

int main()
{
    int xx = 0;
    cout << f(xx) << endl;
    cout << xx << endl;
    int yy = 7;
    cout << g(yy) << endl;
    cout << yy << endl;
}

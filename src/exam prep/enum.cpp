#include<iostream>
using namespace std;

enum Weekday{
    Monday = 1,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

int main()
{
    Weekday today = Friday;
    cout << "Today is " << today << '\n';
    Weekday newday = (today + 1);
    cout << newday << '\n';
    return 0;
}
/*
Student: Dovydas Klisys
ID: B00165094
Date: 19 mar 2025
Purpose: this is a harness code to test the date and time classes in the scheduler.h file.
this is from part 1 of the assignment.
*/

#include<iostream>
#include<fstream>
#include<vector>
#include "scheduler.h"

using namespace std;
using namespace scheduler;

int main() {
    try 
    {
        //test1: correct date and time
        Date d(2005, Date::dec, 22);
        Time t(12, 22);
        cout << d << " " << t << "\n";
    } 
    catch(Time::Bad_time) 
    {
        cerr << "Bad time.\n";
    }
    catch(Date::Bad_Date)
    {
        cerr << "Bad Date.\n";
    }

    try
    {
        //test2: february in leap year
        Date d2(2024, Date::feb, 29);
        Time t2(23, 0);
        cout << d2 << " " << t2 << "\n";
    }
    catch(Time::Bad_time)
    {
        cerr << "Bad time.\n";
    }
    catch(Date::Bad_Date)
    {
        cerr << "Bad Date.\n";
    }

    try
    {
        //test3: date and time incorrect
        Date d2(1200, Date::feb, 30);
        Time t2(23, 0);
        cout << d2 << " " << t2 << "\n";
    }
    catch(Time::Bad_time)
    {
        cerr << "Bad time.\n";
    }
    catch(Date::Bad_Date)
    {
        cerr << "Bad Date.\n";
    }

    try 
    {
        //test4: month passed as integer
        Date d2(2024, 2, 29);
        Time t2(23, 0);
        cout << d2 << " " << t2 << "\n";
    }
    catch(Time::Bad_time)
    {
        cerr << "Bad time.\n";
    }
    catch(Date::Bad_Date)
    {
        cerr << "Bad Date.\n";
    }

    try
    {
        //test5: full event with attendees
        Event e(Date(2024,Date::mar,12), Time(15, 0), Time(16, 0), "Boardroom A");
        e.add_attendee("Sam Smith");
        e.add_attendee("David James");
        e.add_attendee("Robert Frost");
        cout << e << "\n";
    }
    catch(Time::Bad_time)
    {
        cerr << "Bad time.\n";
    }
    catch(Date::Bad_Date)
    {
        cerr << "Bad Date.\n";
    }

    try
    {
        //test6: no attendees
        Event event(Date(2020,Date::sep,3), Time(12,10), Time(13,0), "Meeting Room");
        cout << event << "\n";
    }
    catch(Time::Bad_time)
    {
        cerr << "Bad time.\n";
    }
    catch(Date::Bad_Date)
    {
        cerr << "Bad Date.\n";
    }

    try
    {
        //test7: time incorrect in event
        Event event(Date(1990,Date::sep,3), Time(12,10), Time(13,-10), "Meeting Room");
        cout << event << "\n";
    }
    catch(Time::Bad_time)
    {
        cerr << "Bad time.\n";
    }
    catch(Date::Bad_Date)
    {
        cerr << "Bad Date.\n";
    }

    try
    {
        //test8: full meeting 
        Meeting m( Date(2024, Date::mar, 12), Time(15,0), Time(16,0),
        "Boardroom A", "Patti Higgins");
        m.add_attendee("Leighton Washington");
        m.add_attendee("Zavier Austin");
        m.add_attendee("Alexis Massey");
        cout << m;
    }
    catch(Time::Bad_time)
    {
        cerr << "Bad time.\n";
    }
    catch(Date::Bad_Date)
    {
        cerr << "Bad Date.\n";
    }

    return 0;

}
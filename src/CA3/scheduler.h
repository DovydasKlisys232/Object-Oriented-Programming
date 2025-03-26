#ifndef __SCHEDULER_H__
#define __SCHEDULER_H__

#include<iostream> //standard library functions
#include<iomanip> //
#include<vector>

using namespace std;
namespace scheduler
{
    class Date
    {
        public:
            class Bad_Date { }; //exception class
            //Month enum to keep related values together
            enum Month {
                jan=1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
                };
            //Constructor
            Date(int yy, Month mm, int dd) : y(yy), m(mm), d(dd) {
                if (!check(y,m,d))
                    throw Bad_Date() ;
            };

            //Additional constructor that takes month as an integer
            Date(int yy, int mm, int dd) : y(yy), m(Month(mm)), d(dd) {
                if (!check(y, m, d))
                    throw Bad_Date();  
            };
            
            //getter functions
            Month month() { return m; }
            int day() { return d; }
            int year() { return y; }
            //operator for formatting the Date object output
            friend ostream& operator<<(ostream& os, Date &D)
            {
                return os << D.day() << "/" << D.month() << "/" << D.year();
            }
        private:
            int y, d;
            Month m;
            bool check(int y, Month m, int d); //checks if date is valid, defined in scheduler.cpp
    };

    class Time 
    {
        private:
            int hours;
            int minutes;
            bool check(int hours, int minutes); //checks if time is valid, defined in scheduler.cpp
        public:
            class Bad_time { }; //exception class
            //constructor
            Time(int h, int m) : hours(h), minutes(m) 
            {    
                if (!check(hours, minutes))
                    throw Bad_time() ;  
            };
            //getter functions
            int get_hours() { return hours; }
            int get_minutes() { return minutes; }
            //operator for formatting Time object output
            friend ostream& operator<<(ostream& os, Time &T)
            {
                return os << T.get_hours() << ":" << setfill('0') << setw(2) << T.get_minutes() << ":" << setfill('0') << setw(2) << "00";
            }
    };

    class Event
    {
        private:
            Date date;
            Time start_time;
            Time end_time;
            string location;
            vector<string> attendee;

        public:
            Event(Date d, Time st, Time et, string l) : date(d), start_time(st), end_time(et), location(l) { }

            //function pushes a string parameter into string vector attendee
            void add_attendee(const string &att){
                attendee.push_back(att);
            }
            
            //print function that formats the display structure for an Event object
            //virtual so derived classes can override it 
            virtual void print()
            {
                cout << "Date: " << date << ", Start Time: " << start_time << ", End Time: " << end_time << ", Location: " << location
                << ", Attendees: ";
                for(int i = 0; i < attendee.size(); i++)
                {
                    cout << attendee[i];
                    if(i < attendee.size() - 1)
                        cout << ", ";
                } 
            }

            //operator that prints contents of event on one line
            friend ostream& operator<<(ostream& os, Event &E)
            {
                E.print();
                return os;
            }
    };

    class Meeting : public Event
    {
        private:
            string chair;
        public:
            //constructor, takes event constructor and adds chair variable to it
            Meeting(Date d, Time st, Time et, string l, string c) : Event(d, st, et, l), chair(c) { }

            //event print function overriden to include chair
            void print()
            {
                Event::print();
                cout << ", Chair: " << chair;
            }
    };

    //forward decleration of load function
    vector<Meeting> load(const string& filename);
}

#endif // __SCHEDULER_H__
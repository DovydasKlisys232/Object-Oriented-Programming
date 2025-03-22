#ifndef __SCHEDULER_H__
#define __SCHEDULER_H__

#include<iostream>
#include<iomanip>
#include<vector>

using namespace std;
namespace scheduler
{
    class Date
    {
        public:
            class Bad_Date { }; //exception class
            enum Month {
                jan=1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
                };
            //Constructor
            Date(int yy, Month mm, int dd) : y(yy), m(mm), d(dd) {
                if (!check(y,m,d))
                    throw Bad_Date() ;
             };
            
            //getter functions
            Month month() { return m; }
            int day() { return d; }
            int year() { return y; }
            //operator for formatting the Date object output
            friend ostream& operator<<(ostream& os, Date &D)
            {
                return os << D.d << "/" << D.m << "/" << D.y;
            }
        private:
            int y, d;
            Month m;
            bool check(int y, Month m, int d);
    };
    //checker function used in constructor
    bool Date::check(int y, Month m, int d)
    {
        //check if year is valid
        //range between 1990 to 2050
        if(y < 1990 || y > 2050)
            return false;

        //check if month is valid (from jan to dec)
        if(m > 12 || m < 1)
            return false;

        //check if day is valid depending on what month it is
        if(m == jan || m == mar || m == may || m == jul || m == aug || m == oct || m ==dec)
        {
            if(d > 31 || d < 1)
            {
                return false;
            }
        }
        //if month = feb check for leap year and if day is valid
        if(m == feb)
        {
            if((y % 4 == 0 || y % 400 == 0) && (y % 100 != 0))
            {
                if(d > 29 || d < 1)
                {
                    return false;
                }
            }
            else
            {
                if(d > 28 || d < 1)
                {
                    return false;
                }
            }
        }
        //check if day is valid for following months
        if(m == apr || m == jun || m == sep || m == nov)
        {
            if(d > 30 || d < 1)
            {
                return false;
            }
        }
        return true;
    }

    class Time 
    {
        private:
            int hours;
            int minutes;
            bool check(int hours, int minutes);
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
                return os << T.hours << ":" << setfill('0') << setw(2) << T.minutes << ":" << setfill('0') << setw(3);
            }
    };

    //checker function used in Time constructor
    bool Time::check(int hours, int minutes) {
        return (hours >= 0 && hours < 24 && minutes >= 0 && minutes < 60);
    }

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

            void add_attendee(const string &att){
                attendee.push_back(att);
            }

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
            Meeting(Date d, Time st, Time et, string l, string c) : Event(d, st, et, l), chair(c) { }

            void print() override
            {
                Event::print();
                cout << ", Chair: " << chair;
            }
    };
}

#endif // __SCHEDULER_H__
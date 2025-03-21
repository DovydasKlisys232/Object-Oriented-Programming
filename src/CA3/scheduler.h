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
            class Bad_Date { };
            enum Month {
                jan=1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
                };
            Date(int yy, Month mm, int dd) : y(yy), m(mm), d(dd) {
                if (!check(y,m,d))
                    throw Bad_Date() ;
             };

            Month month() { return m; }
            int day() { return d; }
            int year() { return y; }

            friend ostream& operator<<(ostream& os, Date &D)
            {
                return os << D.d << "/" << D.m << "/" << D.y;
            }
        private:
            int y, d;
            Month m;
            bool check(int y, Month m, int d);
    };

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
        if(m == feb)
        {
            if(d > 28 || d < 1)
            {
                return false;
            }
        }
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
            class Bad_time { };
            Time(int h, int m) : hours(h), minutes(m) 
            {    
                if (!check(hours, minutes))
                    throw Bad_time() ;  
            };
            int get_hours() { return hours; }
            int get_minutes() { return minutes; }

            friend ostream& operator<<(ostream& os, Time &T)
            {
                return os << T.hours << ":" << setfill('0') << setw(2) << T.minutes << ":" << setfill('0') << setw(3);
            }
    };

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
    };

}

#endif // __SCHEDULER_H__
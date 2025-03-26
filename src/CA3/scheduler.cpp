/*
Student: Dovydas Klisys
ID: B00165094
Date: 19 mar 2025
Purpose: this is a program to provide the definition of the load function, declared in the scheduler header file.
Checker functions are defined in this file to avoid dublicate definitions in other cpp files.
*/

#include<fstream>
#include<vector>
#include<sstream>
#include "scheduler.h"

using namespace std;

namespace scheduler {
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

    //checker function used in Time constructor
    bool Time::check(int hours, int minutes) {
        return (hours >= 0 && hours < 24 && minutes >= 0 && minutes < 60);
    }

    vector<Meeting> load(const string& filename)
    {
        vector<Meeting> meetings;
        ifstream file(filename);

        //check if file is not open
        if (!file) {
            cerr << "Error: Could not open file " << filename << endl;
            return meetings;
        }

        //reading the whole text from file as a string into line variable
        string line;
        while (getline(file, line)) 
        {
            stringstream is(line);
            char dash, colon; //used for parsing delimeters

            //first field not used so read but ignore
            string notused;
            getline(is, notused, ',');

            //parse date (year/month/day)
            string datestr;
            getline(is, datestr, ',');
            int year, month, day;
            stringstream date_is(datestr);
            date_is >> year >> dash >> month >> dash >> day;
            Date date(year, Date::Month(month), day);

            //parse start time (hour:min:00)
            string startstr;
            getline(is, startstr, ','); 
            int start_hour, start_min;
            stringstream start_is(startstr);
            start_is >> start_hour >> colon >> start_min;
            Time startTime(start_hour, start_min);

            //parse end time (hour:min:00)
            string endstr;
            getline(is, endstr, ',');
            int end_hour, end_min;
            stringstream end_is(endstr);
            end_is >> end_hour >> colon >> end_min;
            Time endTime(end_hour, end_min);

            //Read location
            string location;
            getline(is, location, ',');

            //Read chair
            string chair;
            getline(is, chair, ',');

            //Create a Meeting object
            Meeting meeting(date, startTime, endTime, location, chair);

            //Read attendees
            string attendee;
            while (getline(is, attendee, ',')) {
                meeting.add_attendee(attendee);
            }

            meetings.push_back(meeting); //parsed meeting reading is stored in vector
        }

        file.close();
        return meetings;

    }
}


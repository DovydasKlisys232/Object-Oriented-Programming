/*
Student: Dovydas Klisys
ID: B00165094
Date: 3 mar 2025
Purpose: this program 
*/

#include<iostream>

using namespace std;

class Date {
    public:
        enum Month {
            jan=1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
        };
        class Invalid {} ;
        Date(int yy, Month mm, int dd) : y(yy), m(mm), d(dd) {
            if (!check(y,m,d))
            {
                throw Invalid() ;
            }
        }
        Month get_month() const{ return m; }
        int get_day() const{ return d; }
        int get_year() const{ return y; }
        void add_day(int n) {
            d += n;
            adjust_date();
        }

    private:
        int y, d;
        Month m;
        bool check(int yy, Month mm, int dd);
        void adjust_date()
        {
            int days_in_month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
            while (d > days_in_month[m - 1]) {
                d -= days_in_month[m - 1];
                m = static_cast<Month>(m + 1);
                if (m > dec) {
                    m = jan;
                    y++;
                }
            }
        }

    bool Date::check(int yy, Month mm, int dd) {
        // some code to check the date is ok
    }
            
};

int main()
{

    return 0;
}
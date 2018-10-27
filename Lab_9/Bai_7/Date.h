#ifndef DATE_H_INCLUDED
#define DATE_H_INCLUDED

#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>
#include <ctime>

using namespace std;

class Date
{
private:
    int mday;
    int mon;
    int year;
public:
    Date()
    {
        time_t now = time(0);
        tm *lct = localtime(&now);
        this->mday = lct->tm_mday;
        this->mon = 1 + lct->tm_mon;
        this->year = 1900 + lct->tm_year;
    }
    Date(int mday, int mon, int year)
    {
        this->mday = mday;
        this->mon = mon;
        this->year = year;
    }
    friend ostream &operator<< (ostream &output, const Date &D)
    {
        output << setw(2) << setfill('0') << D.mday << "/" << setw(2) << setfill('0') << D.mon << "/" << setw(4) << D.year;
        return output;
    }
    friend istream &operator>> (istream &input, Date &D)
    {
        input >> D.mday;
        input.ignore(1);
        input >> D.mon;
        input.ignore(1);
        input >> D.year;
        return input;
    }
    bool operator< (Date D)
    {
        if (this->year < D.year)
        {
            return 1;
        }
        else if (this->year == D.year && this->mon < D.mon)
        {
            return 1;
        }
        else if (this->year == D.year && this->mon == D.mon && this->mday < D.mday)
        {
            return 1;
        }
        return 0;
    }
    string toString()
    {
        stringstream ss;
        string s;
        if (this->mday < 10)
        {
            ss << "0";
        }
        ss << this->mday << "/";
        if (this->mon < 10)
        {
            ss << "0";
        }
        ss << this->mon << "/" << year;
        ss >> s;
        return s;
    }
};

#endif // DATE_H_INCLUDED

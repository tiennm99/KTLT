//Cau_5
#include <iostream>
#include <iomanip>
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
    ~Date() {}
};

int main()
{
    Date d(14,7,2017);
    cout << d << endl;
    return 0;
}

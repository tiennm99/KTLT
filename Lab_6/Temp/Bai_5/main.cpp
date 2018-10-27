#include <iostream>
#include <cstring>
#include <sstream>
#include <cstdio>

using namespace std;

typedef struct
{
    int d, M, y, h, m, s;
} time;

int main()
{
    stringstream ss;
    string s;
    int delta_time[6] = {0, 0, 0, 0, 0, 0};
    int days[2][12] = {
        {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
        {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
    };
    int i, sec, sec1, sec2;
    char c;
    time t1, t2;
    bool b, leap1 = 0, leap2 = 0;
    cout << "Nhap vao 2 thoi gian theo dinh dang dd/MM/yyyy hh:mm:ss" << endl;
    cout << "Nhap vao thoi gian thu nhat: ";
    fflush(stdin);
    getline(cin, s);
    ss << s;
    ss >> t1.d >> c >> t1.M >> c >> t1.y >> t1.h >> c >> t1.m >> c >> t1.s;
    ss.clear();
    cout << "Nhap vao thoi gian thu hai: ";
    fflush(stdin);
    getline(cin, s);
    ss << s;
    ss >> t2.d >> c >> t2.M >> c >> t2.y >> t2.h >> c >> t2.m >> c >> t2.s;
    if ((t1.y%4 == 0 && t1.y%100 != 0) || (t1.y%400 ==0))
    {
        leap1 = 1;
    }
    if ((t2.y%4 == 0 && t2.y%100 != 0) || (t2.y%400 ==0))
    {
        leap2 = 1;
    }
    b = 1;
    if (t1.y > t2.y)
    {
        b = 0;
    }
    else
    {
        if (t1.y == t2.y)
        {
            if (t1.M > t2.M)
            {
                b = 0;
            }
            else
            {
                if (t1.M == t2.M)
                {
                    if (t1.d > t2.d)
                    {
                        b = 0;
                    }
                    else
                    {
                        if (t1.d == t2.d)
                        {
                            if (t1.h > t2.h)
                            {
                                b = 0;
                            }
                            else
                            {
                                if (t1.h == t2.h)
                                {
                                    if (t1.m > t2.m)
                                    {
                                        b = 0;
                                    }
                                    else
                                    {
                                        if (t1.m == t2.m)
                                        {
                                            if (t1.s >= t2.s)
                                            {
                                                b = 0;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (b)
    {
        time t;
        t = t1;
        t1 = t2;
        t2 = t;
    }
    sec = 0;
    for (i = t2.y + 1; i < t1.y; i++)
    {
        if ((i%4 == 0 && i%100 != 0) || (i%400 == 0))
        {
            sec += 366*24*3600;
        }
        else
        {
            sec += 365*24*3600;
        }
    }
    for (i = t2.M + 1; i <= 12; i++)
    {
        sec += days[leap2][i - 1]*24*3600;
    }
    for (i = 1; i < t1.M; i++)
    {
        sec += days[leap1][i - 1]*24*3600;
    }
    for (i = t2.d + 1; i <= days[leap2][t2.M - 1]; i++)
    {
        sec += 24*3600;
    }
    for (i = 1; i < t1.d; i++)
    {
        sec += 24*3600;
    }
    sec1 = t1.h*3600 + t1.m*60 + t1.s;
    sec2 = t2.h*3600 + t2.m*60 + t2.s;
    sec += (sec1 + (24*3600 - sec2));
    if (t1.y == t2.y)
    {
        if (leap1)
        {
            sec -= 366*24*3600;
        }
        else
        {
            sec -= 365*24*3600;
        }
    }
    delta_time[5] = sec%60;
    delta_time[4] = sec/60;
    delta_time[3] = delta_time[4]/60;
    delta_time[4] %= 60;
    delta_time[2] = delta_time[3]/24;
    delta_time[3] %= 24;
    delta_time[1] = delta_time[2]/30;
    delta_time[2] %= 30;
    delta_time[0] = delta_time[1]/12;
    delta_time[1] %= 12;
    cout << "Do lech giay: " << sec << " giay." << endl;
    b = 1;
    cout << "Do lech thoi gian: ";
    if (delta_time[0])
    {
        cout << delta_time[0] << " nam ";
        b = 0;
    }
    if (delta_time[1])
    {
        cout << delta_time[1] << " thang ";
        b = 0;
    }
    if (delta_time[2])
    {
        cout << delta_time[2] << " ngay ";
        b = 0;
    }
    if (delta_time[3])
    {
        cout << delta_time[3] << " gio ";
        b = 0;
    }
    if (delta_time[4])
    {
        cout << delta_time[4] << " phut ";
        b = 0;
    }
    if (delta_time[5] || b)
    {
        cout << delta_time[5] << " giay";
    }
    return 0;
}

#include <iostream>
#include <cmath>
#include <iomanip>

#define EPSILON 1.0E-10
#define PI 3.14159265359

using namespace std;

int main()
{
    double x, lnx, sinx, cosx, tanx, a, b, c, i;
    cout << "Nhap vao gia tri x: ";
    cin >> x;
    while (cin.fail())
    {
        cin.clear();
        cin.ignore(999, '\n');
        cout << "Nhap sai yeu cau! Vui long nhap lai: ";
        cin >> x;
    }
    if (x > 0)
    {
        a = (x - 1)/(x + 1);
        lnx = 0;
        i = 0;
        b = a;
        while (fabs(b) > EPSILON)
        {
            lnx = lnx + b/(2*i + 1);
            b = b*a*a;
            i++;
        }
        lnx = lnx*2;
        cout << "lnx = " << setprecision(10) << lnx << endl;
    }
    else
    {
        cout << "lnx khong xac dinh!" << endl;
    }
    x = x - (2*PI)*((unsigned long long)(x/(2*PI)));
    sinx = 0;
    i = 0;
    a = x;
    b = 1;
    c = 1;
    while (fabs(c*a/b) > EPSILON)
    {
        i = i + 1;
        sinx = sinx + c*a/b;
        a = a*x*x;
        b = b*(2*i)*(2*i + 1);
        c = -c;
    }
    x = x - (2*PI)*((unsigned long long)(x/(2*PI)));
    cosx = 1;
    i = 1;
    a = 1;
    b = 1;
    c = 1;
    while (fabs(c*a/b) > EPSILON)
    {
        a = a*x*x;
        b = b*(2*i - 1)*(2*i);
        c = -c;
        i = i + 1;
        cosx = cosx + c*a/b;
    }
    cout << "cos x = " << setprecision(10) << cosx << endl;
    if (fabs(x - PI/2) < EPSILON || fabs(x + PI/2) < EPSILON)
    {
        cout << "tanx khong xac dinh!" << endl;
    }
    else
    {
        tanx = sinx/cosx;
        cout << "tan x = " << setprecision(10) << tanx << endl;
    }
    return 0;
}

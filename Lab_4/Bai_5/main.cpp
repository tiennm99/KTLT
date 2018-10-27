#include <iostream>
#include <cmath>
#include <iomanip>

#define EPSILON 1.0E-10
#define PI 3.14159265359

using namespace std;

int main()
{
    double x, sinx, a, b, c, i;
    cout << "Nhap vao gia tri x: ";
    cin >> x;
    while (cin.fail())
    {
        cin.clear();
        cin.ignore(999, '\n');
        cout << "Nhap sai yeu cau! Vui long nhap lai: ";
        cin >> x;
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
    cout << "sinx = " << setprecision(10) << sinx;
    return 0;
}

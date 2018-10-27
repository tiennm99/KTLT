#include <iostream>
#include <cmath>

#define EPSILON 1E-10
#define LN10 2.30258509299404568402

using namespace std;

int main()
{
    double x;
    cout << "Nhap x: ";
    cin >> x;
    while (cin.fail())
    {
        cout << "Nhap khong thoa yeu cau. Vui long nhap lai: ";
        cin.clear();
        cin.ignore(999, '\n');
        cin >> x;
    }
    if (x <= 0)
    {
        cout << "ln x khong xac dinh";
    }
    else
    {
        double lnx, a, b, c;
        int d;
        d = 0;
        while (x > 1)
        {
            x /= 10;
            d++;
        }
        lnx = 0;
        a = 1;
        b = x - 1;
        c = 1;
        while (fabs(a*b/c) > EPSILON)
        {
            lnx += a*b/c;
            a *= -1;
            b *= (x - 1);
            c++;
        }
        lnx += (d*LN10);
        cout << "lnx = " << lnx << endl;
    }

    return 0;
}

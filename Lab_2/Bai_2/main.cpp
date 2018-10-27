#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, c, delta, x1, x2;
    cout << "Nhap he so a, b, c: ";
    cin >> a >> b >> c;
    delta = b*b - 4*a*c;
    x1 = (-b + sqrt(delta))/(2*a);
    x2 = (-b - sqrt(delta))/(2*a);
    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;
    return 0;
}

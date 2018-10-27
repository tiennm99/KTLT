#include <iostream>
using namespace std;

int main()
{
    float a1, a2, b1, b2, x, y;
    cout << "Nhap he so a1, b1 cho duong thang thu nhat: ";
    cin >> a1 >> b1;
    cout << "Nhap he so a2, b2 cho duong thang thu hai: ";
    cin >> a2 >> b2;
    x = (b2 - b1)/(a1 - a2);
    y = a1*x + b1;\
    cout << "Giao cua hai duong thang la (x, y) = (" << x << ", " << y << ")";
    return 0;
}

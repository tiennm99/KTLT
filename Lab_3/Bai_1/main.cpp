#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double oX, oY, R, aX, aY, d;
    cout << "Nhap toa do O(oX, oY): ";
    cin >> oX >> oY;
    cout << "Nhap  ban kinh R: ";
    cin >> R;
    if (R>=0)
    {
        cout << "Nhap toa do diem A(aX, aY): ";
        cin >> aX >> aY;
        d = sqrt((aX-oX)*(aX-oX)+(aY-oY)*(aY-oY));
        if (d>R)
            cout << "A nam ngoai duong tron." << endl;
        else
            cout << "A nam trong duong tron." << endl;
    }
    else
        cout << "Loi: R phai khong am. Ban vua nhap R = " << R << endl;
    return 0;
}

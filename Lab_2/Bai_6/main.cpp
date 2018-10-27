#include <iostream>
#include <cmath>
using namespace std;

#define PI 3.14159265358979323846

int main()
{
    //float a, b, c, angleA, angleB, angleC;
    double a, b, c, angleA, angleB, angleC;
    cout << "Nhap vao 3 canh tam giac: ";
    cin >> a >> b >> c;
    angleA = acos((b*b + c*c - a*a)/(2*b*c))*180/PI;
    angleB = acos((a*a + c*c - b*b)/(2*a*c))*180/PI;
    angleC = acos((a*a + b*b - c*c)/(2*a*b))*180/PI;
    cout << "Goc A = " << angleA << endl;
    cout << "Goc B = " << angleB << endl;
    cout << "Goc C = " << angleC << endl;
    cout << "Goc A + Goc B + Goc C = " << angleA + angleB + angleC << endl;
    return 0;
}

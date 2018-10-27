#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int n, i, canh = 6;
    double pi, m = 1;
    cout << "Nhap so lan phan chia: ";
    cin >> n;
    while (cin.fail())
    {
        cin.clear();
        cin.ignore(999, '\n');
        cout << "Nhap sai yeu cau! Vui long nhap lai: ";
        cin >> n;
    }
    for (i = 0; i <= n; i++)
    {
        pi = canh*m/2;
        cout << "Lan phan chia thu " << i << ", la da giac deu " << canh << " canh, PI = " << setprecision(20) << pi << endl;
        m = sqrt(2 - sqrt(4 - m*m));
        canh = canh*2;
    }
    return 0;
}

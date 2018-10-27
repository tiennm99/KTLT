#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int n, i;
    double c1, pi1, c2, pi2, pi3;
    cout << "Nhap n: ";
    cin >> n;
    while (cin.fail())
    {
        cin.fail();
        cin.ignore(999, '\n');
        cout << "Nhap sai yeu cau! Vui long nhap lai: ";
        cin >> n;
    }
    // Cach 1
    c1 = 0;
    pi1 = 2;
    for (i = 0; i < n; i++)
    {
        c1 = sqrt(2+c1);
        pi1 = pi1*2/c1;
    }
    cout << "Theo cach 1, pi1 = " << setprecision(20) << pi1 << endl;
    // Cach 2
    c2 = 1;
    pi2 = 1;
    for (i = 1; i < n; i++)
    {
        c2 = c2*i/(2*i + 1);
        pi2 = pi2 + c2;
    }
    pi2 = pi2*2;
    cout << "Theo cach 2, pi2 = " << setprecision(20) << pi2 << endl;
    // Cach 3
    pi3 = 1;
    for (i = 1; i <= n; i++)
    {
        if (i%2)
        {
            pi3 = pi3*(i + 1)/i;
        }
        else
        {
            pi3 = pi3*i/(i + 1);
        }
    }
    pi3 = pi3*2;
    cout << "Theo cach 3, pi3 = " << setprecision(20) << pi3 << endl;
    return 0;
}

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n, i, j;
    cout << "Nhap n (n > 0, n%2 == 1): ";
    cin >> n;
    while (cin.fail() || n < 1 || n%2 == 0)
    {
        cin.clear();
        cin.ignore(999, '\n');
        cout << "Nhap sai yeu cau! Vui long nhap lai: ";
        cin >> n;
    }
    for (i = 1; i <= (n/2 + 1); i++)
    {
        cout << setw(n/2 + 2 - i);
        for (j = 1; j < 2*i; j++)
        {
            cout << '*';
        }
        cout << endl;
    }
    cout << endl << endl;
    cout << setw(n/2 + 1) << '*' << endl;
    for (i = 2; i <= n/2; i++)
    {
        cout << setw(n/2 + 2 - i) << '*' << setw(2*(i -1)) << '*' << endl;
    }
    for (i = 1; i <= n; i++)
    {
        cout << '*';
    }
    return 0;
}

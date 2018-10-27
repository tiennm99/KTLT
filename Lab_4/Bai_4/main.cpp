#include <iostream>
using namespace std;

int main()
{
    int current, previous, next;
    float n, i;
    cout << "Nhap n (khong am): ";
    cin >> n;
    while (cin.fail() || n < 0)
    {
        cin.clear();
        cin.ignore(999, '\n');
        cout << "Nhap sai yeu cau! Vui long nhap lai: ";
        cin >> n;
    }
    if (n == 0 || n ==1)
    {
        cout << "F(" << n << ") = 1";
    }
    else
    {
        previous = 1;
        current = 1;
        for (i = 1; i < n; i++)
        {
            next = current + previous;
            previous = current;
            current = next;
        }
        cout << "F(" << n << ") = " << current;
    }
    return 0;
}

#include <iostream>
#include <cstdlib>

#define EPSILON 1.0E-10

using namespace std;

int main()
{
    int n, i;
    double x, y, dem;
    cout << "Nhap vao gia tri n: ";
    cin >> n;
    while (cin.fail())
    {
        cin.clear();
        cin.ignore(999, '\n');
        cout << "Nhap sai yeu cau! Vui long nhap lai: ";
        cin >> n;
    }
    for (i = 0; i < n; i++)
    {
        x = ((double) rand() / RAND_MAX);
        y = ((double) rand() / RAND_MAX);
        if (x*x + y*y - 1 < EPSILON)
        {
            dem++;
        }
    }
    cout << "PI = " << 4*dem/n;
    return 0;
}

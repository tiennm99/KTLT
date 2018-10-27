#include <iostream>
using namespace std;

int main()
{
    unsigned long n, i;
    unsigned long long tong = 0;
    cout << "Nhap vao so nguyen duong n: ";
    cin >> n;
    while (cin.fail() || n <= 0)
    {
        cin.clear();
        cin.ignore(999, '\n');
        cout << "Nhap sai yeu cau! Vui long nhap lai: ";
        cin >> n;
    }
    for (i = 1; i <= n; i = i + 2)
    {
        tong = tong + i*i;
    }
    cout << "Tong binh phuong cua cac so le tu 1 den n la: " << tong << endl;
    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int n, nam, tuan, ngay;
    cout << "Nhap so ngay: ";
    cin >> n;
    nam = n / 365;
    ngay = n % 365;
    tuan = ngay / 7;
    ngay = ngay % 7;
    cout << n << " ngay = " << nam << " nam + " << tuan << " tuan + " << ngay << " ngay";
    return 0;
}

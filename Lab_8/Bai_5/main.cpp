#include "Bai_5.h"

int main()
{
    int n, d, e, h = 0;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Tong cac phan tu trong mang: " << tong_mang(a, n) << endl;
    cout << "Tich cac phan tu trong mang: " << tich_mang(a, n) << endl;
    cout << "Mang khi in thuan:" << endl;
    in_thuan(a, n);
    cout << endl;
    cout << "Mang khi in nghich:" << endl;
    in_nghich(a, n);
    cout << endl;
    cout << "Phan tu lon nhat trong mang la: " << pt_max(a, n) << endl;
    cout << "Nhap gia tri can chuyen sang ma nhi phan:" << endl;
    cin >> d;
    cout << "Gia tri cua " << d << " khi chuyen sang ma nhi phan la:" << endl;
    cout << dec_2_bin(d) << endl;
    cout << "Nhap gia tri can tim chuoi so hailstone:" << endl;
    cin >> e;
    cout << "Chuoi so hailstone sinh ra tu " << e << " la:" << endl;
    hailstone(e, h);
    cout << endl;
    cout << "Do dai chuoi hailstone: " << h << endl;
    return 0;
}

long long tong_mang(int *a, int n)
{
    if (n > 0)
    {
        return a[n - 1] + tong_mang(a, n - 1);
    }
    else
    {
        return 0;
    }
}

long long tich_mang(int *a, int n)
{
    if (n > 0)
    {
        return a[n - 1]*tich_mang(a, n - 1);
    }
    else
    {
        return 1;
    }
}

void in_thuan(int *a, int n)
{
    if (n > 0)
    {
        cout << a[0] << "\t";
        in_thuan(&a[1], n - 1);
    }
}

void in_nghich(int *a, int n)
{
    if (n > 0)
    {
        cout << a[n - 1] << "\t";
        in_nghich(a, n - 1);
    }
}

int pt_max(int *a, int n)
{
    if (n <= 1)
    {
        return a[n - 1];
    }
    else
    {
        int t = pt_max(a, n - 1);
        if (a[n - 1] < t)
        {
            return t;
        }
        else
        {
            return a[n - 1];
        }
    }
}

string dec_2_bin(int n)
{
    if (n == 0)
    {
        return "";
    }
    else
    {
        if (n%2 == 1)
        {
            return dec_2_bin(n/2) + "1";
        }
        else
        {
            return dec_2_bin(n/2) + "0";
        }
    }
}
void hailstone(int n, int &h)
{
    cout << n << "\t";
    if (n != 1)
    {
        h++;
        if (n%2 == 0)
        {
            hailstone(n/2, h);
        }
        else
        {
            hailstone(3*n + 1, h);
        }
    }

}

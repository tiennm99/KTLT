#include "Bai_4.h"

int main()
{
    int n1, n2, count_Prime = 0, count_Amstrong = 0, count_PerfectNumber = 0;
    cout << "Nhap khoang gia tri [n1, n2]:" << endl;
    cin >> n1 >> n2;
    cout << "Cac so nguyen to trong doan [" << n1 << ", " << n2 << "]:" << endl;
    for (int n = n1; n <= n2; n++)
    {
        if (IsPrime(n))
        {
            count_Prime++;
            cout << n << "\t";
        }
    }
    cout << endl << "Cac so Amstrong trong doan [" << n1 << ", " << n2 << "]:" << endl;
    for (int n = n1; n <= n2; n++)
    {
        if (IsAmstrong(n))
        {
            count_Amstrong++;
            cout << n << "\t";
        }
    }
    cout << endl << "Cac so hoan hao trong doan [" << n1 << ", " << n2 << "]:" << endl;
    for (int n = n1; n <= n2; n++)
    {
        if (IsPerfectNumber(n))
        {
            count_PerfectNumber++;
            cout << n << "\t";
        }
    }
    cout << endl << "Trong doan da cho co " << count_Prime << " so nguyen to, " << count_Amstrong << " so Amstrong, " << count_PerfectNumber << " so hoan hao." << endl;
    return 0;
}

bool IsPrime(int n)
{
    if (n == 0 || n == 1)
    {
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n%i == 0)
        {
            return 0;
        }
    }
    return 1;
}

bool IsAmstrong(int n)
{
    int t = n, sum = 0;
    while (t != 0)
    {
        int r = t%10;
        sum += r*r*r;
        t /= 10;
    }
    if (n == sum)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

bool IsPerfectNumber(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n%i == 0)
        {
            sum += i;
        }
    }
    if (n == sum)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

#include <iostream>
#include <cmath>

#define MAX_SIZE 50

using namespace std;

int main()
{
    float a[MAX_SIZE], trung_binh_cong = 0, do_lech_chuan = 0;
    int n, i, t;
    for (n = 0; n < MAX_SIZE; n++)
    {
        cin >> a[n];
        while (cin.fail())
        {
            cin.clear();
            cin.ignore(999, '\n');
            cin >> a[n];
        }
        if (a[n] < 0)
        {
            break;
        }
    }
    for (i = 0; i < n; i++)
    {
        trung_binh_cong += a[i];
    }
    trung_binh_cong /= n;
    for (i = 0; i < n; i++)
    {
        do_lech_chuan += pow((a[i] - trung_binh_cong), 2);
    }
    do_lech_chuan /= (n - 1);
    do_lech_chuan = sqrt(do_lech_chuan);
    for (i = 0; i < n/2; i++)
    {
        t = a[i];
        a[i] = a[n - (i + 1)];
        a[n - (i + 1)] = t;
    }
    cout << "Trung binh cong: " << trung_binh_cong << endl;
    cout << "Do lech chuan: " << do_lech_chuan << endl;
    cout << "Mang sau khi dao:" << endl;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << '\t';
    }
    cout << endl;
    return 0;
}

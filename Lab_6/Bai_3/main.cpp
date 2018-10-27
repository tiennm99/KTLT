#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

#define MAX_SIZE 100

using namespace std;

int main()
{
    srand(time(NULL));
    int i, m;
    unsigned char a[MAX_SIZE], c;
    int count_char[26];
    for (i = 0; i < 26; i++)
    {
        count_char[i] = 0;
    }
    cout << "Nhap vao m: ";
    cin >> m;
    while(cin.fail() || m < 0 || m > MAX_SIZE)
    {
        cin.clear();
        cin.ignore(999, '\n');
        cout << "Nhap khong thoa yeu cau! Vui long nhap lai: ";
        cin >> m;
    }
    for (i = 0; i < m; i++)
    {
        a[i] = 'a' + rand()*26/RAND_MAX;
    }
    cout << "Chuoi vua tao:" << endl;
    for (i = 0; i < m; i++)
    {
        cout << a[i];
    }
    cout << endl;
    for (i = 0; i < m; i++)
    {
        count_char[a[i] - 'a']++;
    }
    for (c = 'a'; c <= 'z'; c++)
    {
        cout << "Tan suat xuat hien cua ky tu " << c << " la: " << setprecision(3) << (float) count_char[c - 'a']/m << "%" << endl;
    }
    cout << endl;
    return 0;
}

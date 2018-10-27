#include <iostream>

#define MAX_SIZE 10

using namespace std;

int main()
{
    int n, i, t, cur_size = 0, sum = 0, arr[MAX_SIZE];
    cout << "Nhap vao n: ";
    cin >> n;
    while (cin.fail() || n <= 0 || n >= 10)
    {
        cin.clear();
        cin.ignore(999, '\n');
        cout << "Nhap khong thoa yeu cau!. Vui long nhap lai: ";
        cin >> n;
    }
    for (i = 0; i < n; i++)
    {
        cin >> t;
        if (t%2 == 0 && t%3 == 0)
        {
            arr[cur_size++] = t;
        }
    }
    for (i = 0; i < cur_size; i++)
    {
        cout << arr[i] << "\t";
        sum += arr[i];
    }
    cout << endl << sum << endl;
    return 0;
}

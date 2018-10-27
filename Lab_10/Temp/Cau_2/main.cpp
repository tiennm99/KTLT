//Cau_2
#include <iostream>

using namespace std;

void dao_mang(int a[], int n)
{
    for (int i = 0; i < n/2; i++)
    {
        int t = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = t;
    }
}

int main()
{
    int a[4] = {2, 3, 5, 7};
    for (int i = 0; i < 4; i++)
    {
        cout << a[i] << "\t";
    }
    cout << endl;
    dao_mang(a, 4);
     for (int i = 0; i < 4; i++)
    {
        cout << a[i] << "\t";
    }
    cout << endl;
    return 0;
}

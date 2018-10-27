//Cach 1
/*
#include <iostream>
#include <cmath>

#define MAX_SIZE 10

using namespace std;

int main()
{
    int i, t, n = 0, arr[MAX_SIZE];
    double trung_binh = 0, do_lech_chuan = 0;
    int *ptr = arr;
    do
    {
        cin >> ptr[n++];
    } while (n < MAX_SIZE && ptr[n - 1] >= 0);
    if (ptr[n - 1] < 0)
    {
        n--;
    }
    for (i = 0; i < n; i++)
    {
        cout << ptr[i] << "\t";
    }
    cout << endl;
    for (i = 0; i < n; i++)
    {
        trung_binh += ptr[i];
    }
    trung_binh /= n;
    for (i = 0; i < n; i++)
    {
        do_lech_chuan += pow(ptr[i] - trung_binh, 2);
    }
    do_lech_chuan /= (n - 1);
    for (i = 0; i < n/2; i++)
    {
        t = ptr[i];
        ptr[i] = ptr[n - 1 - i];
        ptr[n - 1 - i] = t;
    }
    cout << "Gia tri trung binh: " << trung_binh << endl;
    cout << "Do lech chuan: " << do_lech_chuan << endl;
    cout << "Day so sau khi dao: " << endl;
    for (i = 0; i < n; i++)
    {
        cout << ptr[i] << "\t";
    }
    cout << endl;
    return 0;
}
*/
//================================================================
//Cach 2
#include <iostream>
#include <cmath>

#define MAX_SIZE 10

using namespace std;

int main()
{
    int i, t, n = 0, *ptr = new int[MAX_SIZE];
    double trung_binh = 0, do_lech_chuan = 0;
    do
    {
        cin >> ptr[n++];
    } while (n < MAX_SIZE && ptr[n - 1] >= 0);
    if (ptr[n - 1] < 0)
    {
        n--;
    }
    for (i = 0; i < n; i++)
    {
        cout << ptr[i] << "\t";
    }
    cout << endl;
    for (i = 0; i < n; i++)
    {
        trung_binh += ptr[i];
    }
    trung_binh /= n;
    for (i = 0; i < n; i++)
    {
        do_lech_chuan += pow(ptr[i] - trung_binh, 2);
    }
    do_lech_chuan /= (n - 1);
    for (i = 0; i < n/2; i++)
    {
        t = ptr[i];
        ptr[i] = ptr[n - 1 - i];
        ptr[n - 1 - i] = t;
    }
    cout << "Gia tri trung binh: " << trung_binh << endl;
    cout << "Do lech chuan: " << do_lech_chuan << endl;
    cout << "Day so sau khi dao: " << endl;
    for (i = 0; i < n; i++)
    {
        cout << ptr[i] << "\t";
    }
    cout << endl;
    delete[] ptr;
    ptr = NULL;
    return 0;
}

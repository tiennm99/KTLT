#include <iostream>
#include <cstdlib>
#include <ctime>

#define MAX_SIZE 100

using namespace std;

int main()
{
    srand(time(NULL));
    int **ptr = new int* [MAX_SIZE];
    for (int i = 0; i < MAX_SIZE; i++)
    {
        ptr[i] = new int[MAX_SIZE];
    }
    int n;
    cout << "Nhap gia tri n: ";
    cin >> n;
    while(cin.fail() || n < 1 || n > MAX_SIZE)
    {
        cout << "Nhap khong thoa yeu cau! Vui long nhap lai: n = ";
        cin.clear();
        cin.ignore(999, '\n');
        cin >> n;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)\
        {
            ptr[i][j] = -40 + (int) (rand()*90/RAND_MAX);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)\
        {
            cout << ptr[i][j] << "\t";
        }
        cout << endl;
    }
    for (int i = 0; i < 64; i++)
    {
        cout << "=";
    }
    cout << endl;
    for (int i = 0; i < n/2; i++)
    {
        int t = ptr[i][i];
        ptr[i][i] = ptr[n - 1 - i][n - 1 - i];
        ptr[n - 1 - i][n - 1 - i] = t;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)\
        {
            cout << ptr[i][j] << "\t";
        }
        cout << endl;
    }
    for (int i = 0; i < MAX_SIZE; i++)
    {
        delete[] ptr[i];
        ptr[i] = NULL;
    }
    delete[] ptr;
    ptr = NULL;
    return 0;
}

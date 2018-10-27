#include <iostream>

#define N 3

using namespace std;

int main()
{
    int **m = new int*[N];
    for (int i = 0; i < N; i++)
    {
        m[i] = new int[N];
    }
    int *v = new int[N];
    int *r = new int[N];
    cout << "N = " << N << endl;
    cout << "Nhap vao cac phan tu cua ma tran m(" << N << "x" << N << "):" << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> m[i][j];
        }
    }
    cout << "Nhap vao cac phan tu cua vector v(" << N << "x1):" << endl;
    for (int i = 0; i < N; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < N; i++)
    {
        r[i] = 0;
        for (int j = 0; j < N; j++)
        {
            r[i] += m[i][j]*v[j];
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << m[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < N; i++)
    {
        cout << v[i] << endl;
    }
    cout << endl;
    for (int i = 0; i < N; i++)
    {
        cout << r[i] << endl;
    }
    for (int i = 0; i < N; i++)
    {
        delete[] m[i];
        m[i] = NULL;
    }
    delete[] m;
    m = NULL;
    delete[] v;
    v = NULL;
    delete[] r;
    r = NULL;
}

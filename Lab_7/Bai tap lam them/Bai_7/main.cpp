#include <iostream>
#include <cstdlib>
#include <ctime>

#define N 3

using namespace std;

int main()
{
    srand(time(NULL));
    int **m = new int*[N];
    for (int i = 0; i < N; i++)
    {
        m[i] = new int[i + 1];
    }
    int *y = new int[N];
    double *x = new double[N];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            m[i][j] = -10 + (int) (rand()*20/RAND_MAX);
            if (i == j)
            {
                while (m[i][j] == 0)
                {
                    m[i][j] = -10 + (int) (rand()*20/RAND_MAX);
                }
            }
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << m[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < N; i ++)
    {
        y[i] = -10 + (int) (rand()*20/RAND_MAX);
    }
    for (int i = 0; i < N; i++)
    {
        cout << y[i] << endl;
    }
    cout << endl;
    for (int i = 0; i < N; i++)
    {
        x[i] = y[i];
        for (int j = 0; j < i; j++)
        {
            x[i] -= m[i][j]*x[j];
        }
        x[i]/=m[i][i];
    }
    for (int i = 0; i < N; i++)
    {
        cout << x[i] << endl;
    }
    for (int i = 0; i < N; i++)
    {
        delete[] m[i];
        m[i] = NULL;
    }
    delete[] y;
    y = NULL;
    delete[] x;
    x = NULL;
    return 0;
}

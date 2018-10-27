//Cach 1
/*
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>

#define MAX_SIZE 10

using namespace std;

int main()
{
    srand(time(NULL));
    unsigned int n, i, j, arr[MAX_SIZE][MAX_SIZE], t;
    cin >> n;
    cout << setprecision(4);
    int *ptr = &arr[0][0];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            *(ptr + n*i +j) = (-40 + (int) rand()*90/RAND_MAX);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (j < i)
            {
                cout << *(ptr + n*i +j);
            }
            cout << "\t";
        }
        cout << endl;
    }
    for (i = 0; i < 16; i++)
    {
        cout << "=";
    }
    cout << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (j > i)
            {
                cout << *(ptr + n*i +j);
            }
            cout << "\t";
        }
        cout << endl;
    }
    for (i = 0; i < 16; i++)
    {
        cout << "=";
    }
    cout << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << *(ptr + n*i +j) << "\t";
        }
        cout << endl;
    }
    for (i = 0; i < 16; i++)
    {
        cout << "=";
    }
    cout << endl;
    for (i = 0; i < n/2; i++)
    {
        t = *(ptr + (n + 1)*i);
        *(ptr + (n + 1)*i) = *(ptr + (n + 1)*(n - 1 - i));
        *(ptr + (n + 1)*(n - 1 - i)) = t;
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << *(ptr + n*i +j) << "\t";
        }
        cout << endl;
    }
    return 0;
}
*/
//================================================================================================================================
//Cach 2
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));
    unsigned int n, i, j, t;
    cin >> n;
    cout << setprecision(4);
    int **ptr = new int*[n];
    for (i = 0; i < n; i++)
    {
        ptr[i] = new int[n];
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            ptr[i][j] = (-40 + (int) (rand()*90/RAND_MAX));
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (j < i)
            {
                cout << ptr[i][j];
            }
            cout << "\t";
        }
        cout << endl;
    }
    for (i = 0; i < 16; i++)
    {
        cout << "=";
    }
    cout << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (j > i)
            {
                cout << ptr[i][j];
            }
            cout << "\t";
        }
        cout << endl;
    }
    for (i = 0; i < 16; i++)
    {
        cout << "=";
    }
    cout << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << ptr[i][j] << "\t";
        }
        cout << endl;
    }
    for (i = 0; i < 16; i++)
    {
        cout << "=";
    }
    cout << endl;
    for (i = 0; i < n/2; i++)
    {
        t = ptr[i][i];
        ptr[i][i] = ptr[n - 1 - i][n - 1 - i];
        ptr[n - 1 - i][n - 1 - i] = t;
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << ptr[i][j] << "\t";
        }
        cout << endl;
    }
    for (i = 0; i < n; i++)
    {
        delete[] ptr[i];
        ptr[i] = NULL;
    }
    delete[] ptr;
    ptr[i] = NULL;
    return 0;
}

#include <iostream>

using namespace std;

double **sum(double **x, double **y, int r_x, int c_x, int r_y, int c_y, int &result_x, int &result_y);

int main()
{
    double **x = new double*[3];
    for (int i = 0; i < 3; i++)
    {
        x[i] = new double[4];
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            x[i][j] = i + j;
            cout << x[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
    double **y = new double*[4];
    for (int i = 0; i < 34; i++)
    {
        y[i] = new double[3];
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            y[i][j] = i*j;
            cout << y[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
    int result_x, result_y;
    double **z;
    z = sum(x, y, 3, 4, 4, 3, result_x, result_y);
    for (int i = 0; i < result_x; i++)
    {
        for (int j = 0; j < result_y; j++)
        {
            cout << z[i][j] << "\t";
        }
        cout << endl;
    }
    delete[] z;
    z = NULL;
    for (int i = 0; i < 3; i++)
    {
        delete[] x[i];
        x[i] = NULL;
    }
    delete[] x;
    x = NULL;
    for (int i = 0; i < 4; i++)
    {
        delete[] y[i];
        y[i] = NULL;
    }
    delete[] y;
    y = NULL;
    return 0;
}

double **sum(double **x, double **y, int r_x, int c_x, int r_y, int c_y, int &result_x, int &result_y)
{
    if (r_x > r_y)
    {
        result_x = r_x;
    }
    else
    {
        result_x = r_y;
    }
    if (c_x > c_y)
    {
        result_y = c_x;
    }
    else
    {
        result_y = c_y;
    }
    static double **s = new double*[result_x];
    double new_x[result_x][result_y] = {0};
    double new_y[result_x][result_y] = {0};
    for (int i = 0; i < r_x; i++)
    {
        for (int j = 0; j < c_x; j++)
        {
            new_x[i][j] = x[i][j];
        }
    }
    for (int i = 0; i < r_y; i++)
    {
        for (int j = 0; j < c_y; j++)
        {
            new_y[i][j] = y[i][j];
        }
    }
    for (int i = 0; i < result_x; i++)
    {
        s[i] = new double[result_y];
    }
    for (int i = 0; i < result_x; i++)
    {
        for (int j = 0; j < result_y; j++)
        {
            s[i][j] = new_x[i][j] + new_y[i][j];
        }
    }
    return s;
}

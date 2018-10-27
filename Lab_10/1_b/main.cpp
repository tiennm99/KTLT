#include <iostream>

using namespace std;

typedef struct
{
    int r, c;
    double **m;
} matrix;

matrix sum(matrix x, matrix y);

int main()
{
    return 0;
}

matrix sum(matrix x, matrix y)
{
    static matrix s;
    if (x.r > y.r)
    {
        s.r = x.r;
    }
    else
    {
        s.r = y.r;
    }
    if (x.c > y.c)
    {
        s.c = x.c;
    }
    else
    {
        s.c = y.c;
    }
    double new_x[s.r][s.c] = {0};
    double new_y[s.r][s.c] = {0};
    for (int i = 0; i < x.r; i++)
    {
        for (int j = 0; j < x.c; j++)
        {
            new_x[i][j] = x.m[i][j];
        }
    }
    for (int i = 0; i < y.r; i++)
    {
        for (int j = 0; j < y.c; j++)
        {
            new_y[i][j] = y.m[i][j];
        }
    }
    for (int i = 0; i < s.r; i++)
    {
        for (int j = 0; j < s.c; j++)
        {
            s.m[i][j] = new_x[i][j] + new_y[i][j];
        }
    }
    return s;
}

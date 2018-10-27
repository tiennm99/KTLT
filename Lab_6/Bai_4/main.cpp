#include <iostream>
#include <cmath>

#define N 1000
#define M 50

using namespace std;

int main()
{
    int arr[M], arr_sum[M], i, j, x, t, c;
    for (i = 0; i < M; i++)
    {
        arr_sum[i] = 0;
    }
    for (x = 1; x <= N; x++)
    {
        t = x;
        for (i = M - 1; i >= 0; i--)
        {
            arr[i] = t%10;
            t /= 10;
        }
        for (i = 1; i < x; i++)
        {
            c = 0;
            for (j = M - 1; j >= 0; j--)
            {
                arr[j] = arr[j]*x + c;
                c = arr[j]/10;
                arr[j] %= 10;
            }
        }
        c = 0;
        for (j = M - 1; j >= 0; j--)
        {
            arr_sum[j] += (arr[j] + c);
            c = arr_sum[j]/10;
            arr_sum[j] %= 10;
        }
    }
    for (i = 0; i <= M - 1; i++)
    {
        cout << arr_sum[i];
    }
    return 0;
}

#include <iostream>

using namespace std;

int result(int n);

int main()
{
    int n = 12345;
    cout << result(n);
    return 0;
}

int result(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        if (n%2 == 1)
        {
            return n%10 + result(n/10);
        }
        else
        {
            return result(n/10);
        }
    }
}

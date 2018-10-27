//Cau_3
#include <iostream>

using namespace std;

int chu_so_nho_nhat(int n)
{
    if (n < 10)
    {
        return n;
    }
    else
    {
        int a = n%10;
        int b = chu_so_nho_nhat(n/10);
        if (a < b)
        {
            return a;
        }
        else
        {
            return b;
        }
    }
}

int main()
{
    cout << chu_so_nho_nhat(24353) << endl;
    return 0;
}

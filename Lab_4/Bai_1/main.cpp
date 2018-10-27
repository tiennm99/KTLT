#include <iostream>
using namespace std;

int main()
{
    char i;
    for (i = '0'; i <= '9'; i++)
    {
        cout << "Ky tu \'" << i << "\' co ma ASCII la: " << int(i) << endl;
    }
    cout << endl;
    for (i = 0; i <= 32; i++)
    {
        cout << "=";
    }
    cout << endl << endl;
    for (i = 'a'; i <= 'z'; i++)
    {
        cout << "Ky tu \'" << i << "\' co ma ASCII la: " << int(i) << endl;
    }
    cout << endl;
    for (i = 0; i <= 32; i++)
    {
        cout << "=";
    }
    cout << endl << endl;
    for (i = 'A'; i <= 'Z'; i++)
    {
        cout << "Ky tu \'" << i << "\' co ma ASCII la: " << int(i) << endl;
    }
    return 0;
}

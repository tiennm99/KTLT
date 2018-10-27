#include <iostream>

using namespace std;

int main()
{
    int n;
    double d;
    int *ptr;
    ptr = &n;
    cout << "ptr = " << ptr << endl;
    *ptr = 0;
    cout << "*ptr = " << *ptr << endl;
    *ptr = 1000;
    cout << "*ptr = " << *ptr << endl;
//    ptr = &d;
    return 0;
}

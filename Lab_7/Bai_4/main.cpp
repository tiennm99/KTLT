#include <iostream>

using namespace std;

int main()
{
    int arr[10] = {10, 20, 30, 40, 50};
    int *ptr;
    //ptr = arr;
    //ptr = &arr[0];
    ptr = &arr[2];
    for (int i = 0; i < 3; i++)
    {
        cout << ptr[i] << endl;
    }
    return 0;
}

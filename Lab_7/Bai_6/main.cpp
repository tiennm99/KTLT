#include <iostream>
#include <cmath>

#define N 4

using namespace std;

int main()
{
    double vector_1[N], vector_2[N];
    double length_1 = 0, length_2 = 0, scalar_product = 0, *ptr1 = vector_1, *ptr2 = vector_2;
    int i;
    cout << "Khong gian vector " << N << " chieu." << endl;
    cout << "Nhap toa do cua vector thu nhat: ";
    for (i = 0; i < N; i++)
    {
        cin >> ptr1[i];
    }
    cout << "Nhap toa do cua vector thu hai: ";
    for (i = 0; i < N; i++)
    {
        cin >> ptr2[i];
    }
    for (i = 0; i < N; i++)
    {
        length_1 += ptr1[i]*ptr1[i];
        length_2 += ptr2[i]*ptr2[i];
        scalar_product += ptr1[i]*ptr2[i];
    }
    length_1 = sqrt(length_1);
    length_2 = sqrt(length_2);
    cout << "Do dai vector thu nhat: " << length_1 << endl;
    cout << "Do dai vector thu hai: " << length_2 << endl;
    cout << "Tich vo huong cua hai vector: " << scalar_product << endl;
    return 0;
}

#include <iostream>
using namespace std;

class matrix{
public :
    double** ptr;
    int size;
    matrix()
    {
        this->size = 0;
        this->ptr = NULL;
    }
    matrix(int size)
    {
        this -> size = size;
        ptr = new double*[3];
        for (int i = 0; i < 3; i++)
        {
            ptr[i] = new double[size];
        }
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < size; j++)
            {
                ptr[i][j] = i + j;
            }
        }
    }
    void print()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < this->size; j++)
            {
                cout << this->ptr[i][j] << "\t";
            }
            cout << endl;
        }
        cout << endl;
    }
};

matrix transform(matrix Min)
{
    double x = 0, y = 0, z = 0;
    matrix Mout(Min.size);
    for (int j = 0; j < Min.size; j++)
    {
        x += Min.ptr[0][j];
        y += Min.ptr[1][j];
        z += Min.ptr[2][j];
    }
    x = x/Min.size;
    y = y/Min.size;
    z = z/Min.size;
    for (int j = 0; j < Min.size; j++)
    {
        Mout.ptr[0][j] = Min.ptr[0][j] - x;
        Mout.ptr[1][j] = Min.ptr[1][j] - y;
        Mout.ptr[2][j] = Min.ptr[2][j] - z;
    }
    return Mout;
}

int main()
{
    int N;
    cout << "ENTER N : ";
    cin >> N;
    matrix x(N);
    matrix y;
    y = transform(x);
    x.print();
    y.print();
    return 0;
}

#include <iostream>

using namespace std;

class M
{
    int n;
    double **m;
    M(int n)
    {
        this->n = n;
        double **m = new double *[this->n];
        for (int i = 0; i < this->n; i++)
        {
            m[i] = new double [3];
        }
    }
};

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}

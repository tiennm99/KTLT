//Cau_4
#include <iostream>
#include <iomanip>

using namespace std;

class Matrix
{
public:
    int r, c;
    int **m;
    Matrix(int r, int c)
    {
        this->r = r;
        this->c = c;
        m = new int*[r];
        for (int i = 0; i < r; i++)
        {
            m[i] = new int[c];
        }
    }
    Matrix(const Matrix &m)
    {
        this->r = m.r;
        this->c = m.c;
        this->m = m.m;
    }
    friend ostream &operator<< (ostream &output, const Matrix &m)
    {
        for (int i = 0; i < m.r; i++)
        {
            for (int j = 0; j < m.c; j++)
            {
                output << setw(5) << m.m[i][j];
            }
            output << endl;
        }
        return output;
    }
    /*
    ~Matrix()
    {
        for (int i = 0; i < r; i++)
        {
            delete[] m[i];
            m[i] = NULL;
        }
        delete[] m;
        m = NULL;
    }
    */
};

Matrix diagonal_matrix(Matrix mat)
{
    static Matrix new_mat(mat.r, mat.c);
    for (int i = 0; i < mat.r; i++)
    {
        for (int j = 0; j < mat.c; j++)
        {
            if (i == j)
            {
                new_mat.m[i][j] = mat.m[i][j];
            }
            else
            {
                new_mat.m[i][j] = 0;
            }
        }
    }
    return new_mat;
}

int main()
{
    Matrix m(4, 4);
    for (int i = 0; i < m.r; i++)
    {
        for (int j = 0; j < m.c; j++)
        {
            m.m[i][j] = i + j;
        }
    }
    cout << m << endl;
    Matrix dm(diagonal_matrix(m));
    cout << dm << endl;
    return 0;
}

#include <iostream>

#define MAX_SIZE 100

using namespace std;

int main()
{
    int ra, ca, rb, cb;
    int **a = new int*[MAX_SIZE];
    for (int i = 0; i < MAX_SIZE; i++)
    {
        a[i] = new int[MAX_SIZE];
    }
    int **b = new int*[MAX_SIZE];
    for (int i = 0; i < MAX_SIZE; i++)
    {
        b[i] = new int[MAX_SIZE];
    }
    cout << "Nhap so hang va so cot cua ma tran a: ";
    cin >> ra >> ca;
    cout << "Nhap so hang ca so cot cua ma tran b: ";
    cin >> rb >> cb;
    if (rb != ca)
    {
        cout << "Khong the nhan hai ma tran co kich thuoc " << ra << "x" << ca << " va " << rb << "x" << cb << endl;
    }
    else
    {
        int **c = new int*[ra];
        for (int i = 0; i < ra; i++)
        {
            c[i] = new int[cb];
        }
        cout << "Nhap cac phan tu cua ma tran a: " << endl;
        for (int i = 0; i < ra; i++)
        {
            for (int j = 0; j < ca; j++)
            {
                cin >> a[i][j];
            }
        }
        cout << "Nhap cac phan tu cua ma tran b: " << endl;
        for (int i = 0; i < rb; i++)
        {
            for (int j = 0; j < cb; j++)
            {
                cin >> b[i][j];
            }
        }
        for (int i = 0; i < ra; i++)
        {
            for (int j = 0; j < cb; j++)
            {
                c[i][j] = 0;
                for (int k = 0; k < ca; k++)
                {
                    c[i][j] += a[i][k]*b[k][j];
                }
            }
        }
        for (int i =0; i < ra; i++)
        {
            for (int j = 0; j < cb; j++)
            {
                cout << c[i][j] << "\t";
            }
            cout << endl;
        }
        for (int i = 0; i < ra; i++)
        {
            delete[] c[i];
            c[i] = NULL;
        }
        delete[] c;
        c = NULL;
        for (int i = 0; i < MAX_SIZE; i++)
        {
            delete[] b[i];
            b[i] = NULL;
        }
        delete b;
        b = NULL;
        for (int i = 0; i < MAX_SIZE; i++)
        {
            delete[] a[i];
            a[i] = NULL;
        }
        delete[] a;
        a = NULL;
    }
}

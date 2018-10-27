#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));
    unsigned long hang, cot, i, j;
    cout << "Nhap so hang va so cot cua ma tran: ";
    cin >> hang >> cot;
    int **ma_tran = new int*[hang];
    double *tan_suat = new double[256];
    for (i = 0; i < 256; i++)
    {
        tan_suat[i] = 0;
    }
    for (i = 0; i < hang; i++)
    {
        ma_tran[i] = new int[cot];
    }
    for (i = 0; i < hang; i++)
    {
        for (j = 0; j < cot; j++)
        {
            ma_tran[i][j] = rand()*256/RAND_MAX;
            cout << ma_tran[i][j] << "\t";
            tan_suat[ma_tran[i][j]]++;
        }
        cout << endl;
    }
    for (i = 0; i < 256; i++)
    {
        tan_suat[i] /= (hang*cot);
        cout << "Tan suat xuat hien cua gia tri " << i << " la: " << tan_suat[i] << "%." << endl;
    }
    for (i = 0; i < hang; i++)
    {
        delete[] ma_tran[i];
        ma_tran[i] = NULL;
    }
    delete[] ma_tran;
    ma_tran = NULL;
    delete[] tan_suat;
    tan_suat = NULL;
    return 0;
}

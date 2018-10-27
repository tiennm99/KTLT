#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int main()
{
    srand(time(NULL));
    unsigned int n;
    cin >> n;
    double chieu_dai_1, chieu_dai_2, tich_vo_huong;
    chieu_dai_1 = chieu_dai_2 = tich_vo_huong = 0;
    double *vector_1 = new double[n];
    double *vector_2 = new double[n];
    int i;
    for (i = 0; i < n; i++)
    {
        vector_1[i] = (-10 + (double) rand()/RAND_MAX*20);
        vector_2[i] = (-10 + (double) rand()/RAND_MAX*20);
    }
    cout << "Vector thu nhat: ";
    for (i = 0; i < n; i++)
    {
        cout << vector_1[i] << "\t";
    }
    cout << endl;
    cout << "Vector thu hai: ";
    for (i = 0; i < n; i++)
    {
        cout << vector_2[i] << "\t";
    }
    cout << endl;
    for (i = 0; i < n; i++)
    {
        chieu_dai_1 += pow(vector_1[i], 2);
        chieu_dai_2 += pow(vector_2[i], 2);
        tich_vo_huong += vector_1[i]*vector_2[i];
    }
    chieu_dai_1 = sqrt(chieu_dai_1);
    chieu_dai_2 = sqrt(chieu_dai_2);
    cout << "Do dai vector thu nhat: " << chieu_dai_1 << endl;
    cout << "Do dai vector thu hai: " << chieu_dai_2 << endl;
    cout << "Tich vo huong cua hai vector: " << tich_vo_huong << endl;
    delete[] vector_1;
    delete[] vector_2;
    vector_1 = vector_2 = NULL;
    return 0;
}

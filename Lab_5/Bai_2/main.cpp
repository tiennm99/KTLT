#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cmath>

#define MAX_SIZE 50
#define PI 3.14159

using namespace std;

typedef struct
{
    int so_chieu = 0;
    double chi_so[MAX_SIZE];
    double do_dai;
} vecto;

int main()
{
    ifstream f;
    f.open("input.txt");
    string str;
    vecto vecA, vecB;
    double t;
    int i;
    istringstream iss;
    for (i = 0; i < 4; i++)
    {
        getline(f, str);
    }
    iss.str(str);
    while (iss >> t || !iss.eof())
    {
        if (iss.fail())
        {
            iss.clear();
            continue;
        }
        vecA.chi_so[vecA.so_chieu++] = t;
    }
    iss.clear();
    getline(f, str);
    iss.str(str);
    while (iss >> t || !iss.eof())
    {
        if (iss.fail())
        {
            iss.clear();
            continue;
        }
        vecB.chi_so[vecB.so_chieu++] = t;
    }
    if (vecA.so_chieu != vecB.so_chieu)
    {
        cout << "Co loi xay ra: So chieu cua vector A khac so chieu cua vector B!" << endl;
    }
    else
    {
        cout << "Vector A:";
        for (i = 0; i < vecA.so_chieu; i++)
        {
            cout << " " << vecA.chi_so[i];
        }
        cout << endl << "Vector B:";
        for (i = 0; i < vecB.so_chieu; i++)
        {
            cout << " " << vecB.chi_so[i];
        }
        cout << endl;
        for (i = 0; i < vecA.so_chieu; i++)
        {
            vecA.do_dai += pow(vecA.chi_so[i], 2);
        }
        vecA.do_dai = sqrt(vecA.do_dai);
        for (i = 0; i < vecB.so_chieu; i++)
        {
            vecB.do_dai += pow(vecB.chi_so[i], 2);
        }
        vecB.do_dai = sqrt(vecB.do_dai);
        cout << "Do dai vector A: " << vecA.do_dai << endl;
        cout << "Do dai vector B: " << vecB.do_dai << endl;
        if (vecA.so_chieu == 3)
        {
            double tich_vo_huong = 0, tich_huu_huong[3];
            for (i = 0; i < 3; i++)
            {
                tich_vo_huong += vecA.chi_so[i]*vecB.chi_so[i];
            }
            cout << "Tich vo huong cua vector A va vector B la: " << tich_vo_huong << endl;
            tich_huu_huong[0] = vecA.chi_so[1]*vecB.chi_so[2] - vecB.chi_so[1]*vecA.chi_so[2];
            tich_huu_huong[1] = -(vecA.chi_so[0]*vecB.chi_so[2] - vecB.chi_so[0]*vecA.chi_so[2]);
            tich_huu_huong[2] = vecA.chi_so[0]*vecB.chi_so[1] - vecB.chi_so[0]*vecA.chi_so[1];
            cout << "Tich huu huong cua vector A va vector B la: " << tich_huu_huong[0] << "i + " << tich_huu_huong[1] << "j + " << tich_huu_huong[2] << "k" << endl;
            double goc, hc_vecA, hc_vecB;
            goc = acos(tich_vo_huong/(vecA.do_dai*vecB.do_dai));
            goc = goc/PI*180;
            cout << "Goc tao voi hai vector: " << goc << "do" << endl;
            hc_vecA = fabs(tich_vo_huong/vecB.do_dai);
            hc_vecB = fabs(tich_vo_huong/vecA.do_dai);
            cout << "Do dai hinh chieu cua vector A len vector B la: " << hc_vecA << endl;
            cout << "Do dai hinh chieu cua vector B len vector A la: " << hc_vecB << endl;
        }
    }
    f.close();
    return 0;
}

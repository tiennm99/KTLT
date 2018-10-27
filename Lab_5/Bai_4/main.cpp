#include <iostream>

using namespace std;

int main()
{
    int tra_cuu_nam[10] = {4, 2, 0, 6, 4, 2, 0, 6, 4, 2};
    int tra_cuu_thang[12] = {0, 3, 3, 6, 1, 4, 6, 2, 5, 0, 3, 5};
    int tra_cuu_thang_nam_nhuan[12] = {6, 2, 3, 6, 1, 4, 6, 2, 5, 0, 3, 5};
    char* tra_cuu_thu[] =
    {
        "Chu nhat",
        "Thu hai",
        "Thu ba",
        "Thu tu",
        "Thu nam",
        "Thu sau",
        "Thu bay"
    };
    int ngay, thang, nam, tong_gia_tri, gia_tri_nam, gia_tri_thang;
    cout << "Nhap ngay, thang, nam: ";
    cin >> ngay >> thang >> nam;
    gia_tri_nam = tra_cuu_nam[(nam/100 - 17)];
    if ((nam%4 == 0 && nam%100 != 0) || (nam%400 ==0))
    {
        gia_tri_thang = tra_cuu_thang_nam_nhuan[thang - 1];
    }
    else
    {
        gia_tri_thang = tra_cuu_thang[thang - 1];
    }
    tong_gia_tri = (gia_tri_nam + (nam%100) + (nam%100)/4 + gia_tri_thang + ngay)%7;
    cout << "Ngay " << ngay << " thang " << thang << " nam " << nam << " la " << tra_cuu_thu[tong_gia_tri] << endl;
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int thang_khong_nhuan[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int thang_nhuan[12]= {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int thang, nam, so_ngay, so_tuan, lich_thang[6][7] = {0}, tong_gia_tri, gia_tri_nam, gia_tri_thang, i, j, ngay = 1;
    int tra_cuu_nam[10] = {4, 2, 0, 6, 4, 2, 0, 6, 4, 2};
    int tra_cuu_thang[12] = {0, 3, 3, 6, 1, 4, 6, 2, 5, 0, 3, 5};
    int tra_cuu_thang_nam_nhuan[12] = {6, 2, 3, 6, 1, 4, 6, 2, 5, 0, 3, 5};
    cout << "Nhap thang, nam: ";
    cin >> thang >> nam;
    if ((nam%4 == 0 && nam%100 != 0) || (nam%400 ==0))
    {
        so_ngay = thang_nhuan[thang - 1];
        gia_tri_thang = tra_cuu_thang_nam_nhuan[thang - 1];
    }
    else
    {
        so_ngay = thang_khong_nhuan[thang - 1];
        gia_tri_thang = tra_cuu_thang[thang - 1];
    }
    gia_tri_nam = tra_cuu_nam[(nam/100 - 17)];
    tong_gia_tri = (gia_tri_nam + (nam%100) + (nam%100)/4 + gia_tri_thang + ngay)%7;
    for (j = tong_gia_tri; j < 7; j++)
    {
        lich_thang[0][j] = ngay++;
    }
    for (i = 1; i < 6; i++)
    {
        for (j = 0; j < 7; j++)
        {
            if (ngay > so_ngay)
            {
                break;
            }
            lich_thang[i][j] = ngay++;
            so_tuan = i;
        }
    }
    cout << "Tuan\tCN\tHai\tBa\tTu\tNam\tSau\tBay" << endl;
    for (i = 0; i < 60; i++)
    {
        cout << "=";
    }
    cout << endl;
    for (i = 0; i <= so_tuan; i++)
    {
        cout << i + 1 << '\t';
        for (j = 0; j < 7; j++)
        {
            if (lich_thang[i][j])
            {
                cout << lich_thang[i][j] << '\t';
            }
            else
            {
                cout << '\t';
            }
        }
        cout << endl;
    }
    return 0;
}

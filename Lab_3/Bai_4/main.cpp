#include <iostream>
using namespace std;

int main()
{
    int ngay, thang, nam, gt_nam, gt_thang, gia_tri, tong_gia_tri;
    bool kt_nam_nhuan;
    char* thu[]=
    {
        "Chu nhat",
        "Thu hai",
        "Thu ba",
        "Thu tu",
        "Thu nam",
        "Thu sau",
        "Thu bay"
    };
    cout << "Nhap ngay, thang, nam: ";
    cin >> ngay >> thang >> nam;
    gt_nam = nam/100;
    if ((nam%4 == 0 && nam%100 != 0) || (nam%400 ==0))
    {
        kt_nam_nhuan = 1;
    }
    else
    {
        kt_nam_nhuan = 0;
    }
    switch (gt_nam)
    {
    case 19:
    case 23:
        {
            gt_nam = 0;
            break;
        }
    case 18:
    case 22:
    case 26:
        {
            gt_nam = 2;
            break;
        }
    case 17:
    case 21:
    case 25:
        {
            gt_nam = 4;
            break;
        }
    case 20:
    case 24:
        {
            gt_nam = 6;
            break;
        }
    }
    switch (thang)
    {
    case 1:
        {
            if (kt_nam_nhuan)
            {
                gt_thang = 6;
                break;
            }
        }
    case 10:
        {
            gt_thang = 0;
            break;
        }
    case 5:
        {
            gt_thang = 1;
            break;
        }
    case 8:
        {
            gt_thang = 2;
        }
    case 2:
        {
            if (kt_nam_nhuan)
            {
                gt_thang = 2;
                break;
            }
        }
    case 3:
    case 11:
        {
            gt_thang = 3;
            break;
        }
    case 6:
        {
            gt_thang = 4;
            break;
        }
    case 12:
        {
            gt_thang = 5;
            break;
        }
    case 4:
    case 7:
        {
            gt_thang = 6;
            break;
        }
    }
    tong_gia_tri = nam%100;
    gia_tri = tong_gia_tri/4;
    tong_gia_tri = tong_gia_tri + gia_tri + gt_nam + gt_thang + ngay;
    tong_gia_tri = tong_gia_tri%7;
    cout << "Ngay " << ngay << " thang " << thang << " nam " << nam << " la " << thu[tong_gia_tri];
    return 0;
}

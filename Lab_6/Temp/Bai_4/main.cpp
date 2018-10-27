#include <iostream>
#include <sstream>
#include <cstring>
#include <cstdio>

#define MAX_SIZE 100

using namespace std;

int main()
{
    int mang[MAX_SIZE], mang_binh_phuong[MAX_SIZE], mang_dao[MAX_SIZE], i, n, lua_chon, min, max;
    float trung_binh;
    string s;
    stringstream ss;
    cout << "Nhap vao mang cac so nguyen: ";
    fflush(stdin);
    getline(cin, s);
    ss << s;
    n = 0;
    while (!ss.eof())
    {
        ss >> mang[n++];
    }
    min = max = mang[0];
    trung_binh = 0;
    for (i = 0; i < n; i++)
    {
        if (mang[i] < min)
        {
            min = mang[i];
        }
        if (mang[i] > max)
        {
            max = mang[i];
        }
        trung_binh += mang[i];
        mang_binh_phuong[i] = mang[i]*mang[i];
        mang_dao[(n - 1) - i] = mang[i];
    }
    trung_binh /= n;
    lua_chon = 0;
    cout << "Ban co cac lua chon sau:\n1. In so phan tu\n2. In gia tri lon nhat\n3. In gia tri nho nhat\n4. In gia tri trung binh\n5. Mang goc da nhap\n6. Mang binh phuong\n7. Mang dao\n8. Thoat" << endl;
    while (lua_chon != 8)
    {
        cout << "Nhap lua chon: ";
        cin >> lua_chon;
        switch (lua_chon)
        {
        case 1:
            cout << "So phan tu cua mang la: " << n << endl;
            break;
        case 2:
            cout << "Phan tu lon nhat cua mang la: " << max << endl;
            break;
        case 3:
            cout << "Phan tu nho nhat cua mang la: " << min << endl;
            break;
        case 4:
            cout << "Gia tri trung binh cua mang la: " << trung_binh << endl;
            break;
        case 5:
            cout << "Mang goc:" << endl;
            for (i = 0; i < n; i++)
            {
                cout << mang[i] << "\t";
            }
            cout << endl;
            break;
        case 6:
            cout << "Mang binh phuong:" << endl;
            for (i = 0; i < n; i++)
            {
                cout << mang_binh_phuong[i] << "\t";
            }
            cout << endl;
            break;
        case 7:
            cout << "Mang dao:" << endl;
            for (i = 0; i < n; i++)
            {
                cout << mang_dao[i] << "\t";
            }
            cout << endl;
            break;
        case 8:
            cout << "Ket thuc chuong trinh." << endl;
            break;
        default:
            cout << "Nhap vao khong hop le!" << endl;
        }
    }
    return 0;
}

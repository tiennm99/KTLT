#include <iostream>
#include <cstring>
#include <iomanip>

#define SO_SAO 33

using namespace std;

int main()
{
    string ten_sinh_vien, ma_so_sinh_vien;
    int i, khoang_trong;
    cout << "Nhap vao ten sinh vien: ";
    getline(cin, ten_sinh_vien);
    cout << "Nhap vao ma so sinh vien: ";
    getline(cin, ma_so_sinh_vien);
    for (i = 0; i < SO_SAO; i++)
    {
        cout << "*";
    }
    khoang_trong = ((SO_SAO - 2) - ten_sinh_vien.length())/2;
    cout << endl << "*" << setw(khoang_trong + ten_sinh_vien.length()) << ten_sinh_vien << setw((SO_SAO - 1) - (khoang_trong + ten_sinh_vien.length())) << "*" << endl;
    for (i = 0; i < SO_SAO; i++)
    {
        cout << "*";
    }
    khoang_trong = ((SO_SAO - 2) - ma_so_sinh_vien.length())/2;
    cout << endl << "*" << setw(khoang_trong + ma_so_sinh_vien.length()) << ma_so_sinh_vien << setw((SO_SAO - 1) - (khoang_trong + ma_so_sinh_vien.length())) << "*" << endl;
    for (i = 0; i < SO_SAO; i++)
    {
        cout << "*";
    }
    cout << endl;
    return 0;
}

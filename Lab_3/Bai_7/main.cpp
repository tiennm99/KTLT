#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    string s;
    stringstream ss;
    int toan_hang_1, toan_hang_2, ket_qua;
    char toan_tu;
    cout << "Nhap vao bieu thuc: ";
    getline(cin, s);
    ss << s;
    ss >> toan_hang_1 >> toan_tu >> toan_hang_2;
    switch (toan_tu)
    {
    case '+':
        ket_qua = toan_hang_1 + toan_hang_2;
        cout << "Ket qua cua bieu thuc " << toan_hang_1 << " " << toan_tu << " " << toan_hang_2 << " la: " << ket_qua << endl;
        break;
    case '-':
        ket_qua = toan_hang_1 - toan_hang_2;
        cout << "Ket qua cua bieu thuc " << toan_hang_1 << " " << toan_tu << " " << toan_hang_2 << " la: " << ket_qua << endl;
        break;
    case '*':
        ket_qua = toan_hang_1 * toan_hang_2;
        cout << "Ket qua cua bieu thuc " << toan_hang_1 << " " << toan_tu << " " << toan_hang_2 << " la: " << ket_qua << endl;
        break;
    case '/':
        if (toan_hang_2 != 0)
        {
            ket_qua = toan_hang_1 / toan_hang_2;
            cout << "Ket qua cua bieu thuc " << toan_hang_1 << " " << toan_tu << " " << toan_hang_2 << " la: " << ket_qua << endl;
        }
        else
        {
            cout << "Loi! Voi toan tu \"/\", toan hang 2 khong duoc bang 0." << endl;
        }
        break;
    }
    return 0;
}

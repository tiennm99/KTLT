#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string s;
    stringstream ss;
    double x, px;
    int n;
    cout << "Nhap chuoi cac he so: ";
    getline(cin, s);
    ss << s;
    cout << "Nhap gia tri x: ";
    cin >> x;
    while (cin.fail())
    {
        cin.clear();
        cin.ignore(999, '\n');
        cout << "Nhap sai yeu cau! Vui long nhap lai: ";
        cin >> x;
    }
    px = 0;
    while (!ss.eof())
    {
        ss >> n;
        px = px*x + n;
    }
    cout << "Gia tri bieu thuc la: " << px << endl;
    return 0;
}

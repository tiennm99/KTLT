#include <iostream>

using namespace std;

int main()
{
    unsigned int a, b, c, d, e, emax, tong, n, so_nghiem = 0;
    cout << "Nhap khoang gia tri can tim nghiem: ";
    cin >> n;
    while (cin.fail())
    {
        cin.clear();
        cin.ignore(999, '\n');
        cout << "Nhap sai yeu cau! Vui long nhap lai: ";
        cin >> n;
    }
    for (tong = 6; tong < n; tong++)
    {
        emax = tong/6;
        for (e = 1; e < emax; e++)
        {
            if ((tong - e)%5 == 0)
            {
                d = (tong - e)/5;
                if ((tong - d)%4 == 0)
                {
                    c = (tong - d)/4;
                    if ((tong - c)%3 == 0)
                    {
                        b = (tong - c)/3;
                        if ((tong - b)%2 == 0)
                        {
                            a = (tong - b)/2;
                            if (tong == a + 6*e)
                            {
                                cout << "Chieu dai soi day thung cua moi gia dinh lan luot la: " << endl;
                                cout << "Gia dinh A: " << a << endl;
                                cout << "Gia dinh B: " << b << endl;
                                cout << "Gia dinh C: " << c << endl;
                                cout << "Gia dinh D: " << d << endl;
                                cout << "Gia dinh E: " << e << endl;
                                cout << "Chieu dai cua soi day chung la: " << tong << endl;
                                so_nghiem++;
                                cout << endl;
                            }
                        }
                    }
                }
            }
        }
    }
    if (!so_nghiem)
    {
        cout << "Trong khoang vua cho khong tim thay gia tri thoa yeu cau." << endl;
    }
    return 0;
}

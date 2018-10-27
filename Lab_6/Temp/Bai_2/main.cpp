#include <iostream>
#include <sstream>
#include <string>
#include <cstdio>

#define SO_CAU_THU 11

using namespace std;

typedef struct
{
    int so_ao, so_tran_dau;
    string ho_ten, vi_tri;
    float chieu_cao, can_nang;
} cau_thu;

int main()
{
    cau_thu cauthu[SO_CAU_THU];
    bool b[SO_CAU_THU];
    int i, sotrandau;
    float chieucao, cannang;
    string s, st;
    char c;
    stringstream ss, sst;
    for (i = 0; i < SO_CAU_THU; i++)
    {
        b[i] = 1;
        cout << "STT: " << i + 1 << endl;
        cout << "So ao: ";
        cin >> cauthu[i].so_ao;
        cout << "Ho ten: ";
        fflush(stdin);
        getline(cin, cauthu[i].ho_ten);
        cout << "Vi tri:";
        fflush(stdin);
        getline(cin, cauthu[i].vi_tri);
        cout << "Chieu cao: ";
        cin >> cauthu[i].chieu_cao;
        cout << "Can nang: ";
        cin >> cauthu[i].can_nang;
        cout << "So tran dau: ";
        cin >> cauthu[i].so_tran_dau;
        cout << endl;
    }
    cout << "Nhap vao truy van thong tin cau thu:" << endl;
    cout << "Chieu cao: ";
    cin >> s;
    ss << s;
    ss >> c;
    s = "";
    s += c;
    ss >> c;
    if (c == '=')
    {
        s += c;
        ss >> chieucao;
    }
    else
    {
        sst << c;
        ss >> st;
        sst << st;
        sst >> chieucao;
    }
    if (ss == ">")
    {
        for (i = 0; i < SO_CAU_THU; i++)
        {
            if (cauthu[i].chieu_cao <= chieucao)
            {
                b[i] = 0;
            }
        }
    }
    else if (ss == ">=")
    {
        for (i = 0; i < SO_CAU_THU; i++)
        {
            if (cauthu[i].chieu_cao < chieucao)
            {
                b[i] = 0;
            }
        }
    }
    else if (ss == "<")
    {
        for (i = 0; i < SO_CAU_THU; i++)
        {
            if (cauthu[i].chieu_cao >= chieucao)
            {
                b[i] = 0;
            }
        }
    }
    else if (ss == "<=")
    {
        for (i = 0; i < SO_CAU_THU; i++)
        {
            if (cauthu[i].chieu_cao > chieucao)
            {
                b[i] = 0;
            }
        }
    }
    else if (ss == "==")
    {
        for (i = 0; i < SO_CAU_THU; i++)
        {
            if (cauthu[i].chieu_cao != chieucao)
            {
                b[i] = 0;
            }
        }
    }
    cout << "Can nang: ";
    cin >> s;
    ss << s;
    ss >> c;
    s = "";
    s += c;
    ss >> c;
    if (c == '=')
    {
        s += c;
        ss >> cannang;
    }
    else
    {
        sst << c;
        ss >> st;
        sst << st;
        sst >> cannang;
    }
    if (ss == ">")
    {
        for (i = 0; i < SO_CAU_THU; i++)
        {
            if (cauthu[i].can_nang <= cannang)
            {
                b[i] = 0;
            }
        }
    }
    else if (ss == ">=")
    {
        for (i = 0; i < SO_CAU_THU; i++)
        {
            if (cauthu[i].can_nang < cannang)
            {
                b[i] = 0;
            }
        }
    }
    else if (ss == "<")
    {
        for (i = 0; i < SO_CAU_THU; i++)
        {
            if (cauthu[i].can_nang >= cannang)
            {
                b[i] = 0;
            }
        }
    }
    else if (ss == "<=")
    {
        for (i = 0; i < SO_CAU_THU; i++)
        {
            if (cauthu[i].can_nang > cannang)
            {
                b[i] = 0;
            }
        }
    }
    else if (ss == "==")
    {
        for (i = 0; i < SO_CAU_THU; i++)
        {
            if (cauthu[i].can_nang != cannang)
            {
                b[i] = 0;
            }
        }
    }
    cout << "So tran dau: ";
    cin >> s;
    ss << s;
    ss >> c;
    s = "";
    s += c;
    ss >> c;
    if (c == '=')
    {
        s += c;
        ss >> sotrandau;
    }
    else
    {
        sst << c;
        ss >> st;
        sst << st;
        sst >> sotrandau;
    }
    if (ss == ">")
    {
        for (i = 0; i < SO_CAU_THU; i++)
        {
            if (cauthu[i].so_tran_dau <= sotrandau)
            {
                b[i] = 0;
            }
        }
    }
    else if (ss == ">=")
    {
        for (i = 0; i < SO_CAU_THU; i++)
        {
            if (cauthu[i].so_tran_dau < sotrandau)
            {
                b[i] = 0;
            }
        }
    }
    else if (ss == "<")
    {
        for (i = 0; i < SO_CAU_THU; i++)
        {
            if (cauthu[i].so_tran_dau >= sotrandau)
            {
                b[i] = 0;
            }
        }
    }
    else if (ss == "<=")
    {
        for (i = 0; i < SO_CAU_THU; i++)
        {
            if (cauthu[i].so_tran_dau > sotrandau)
            {
                b[i] = 0;
            }
        }
    }
    else if (ss == "==")
    {
        for (i = 0; i < SO_CAU_THU; i++)
        {
            if (cauthu[i].so_tran_dau != sotrandau)
            {
                b[i] = 0;
            }
        }
    }
    for (i = 0; i < SO_CAU_THU; i++)
    {
        if (b[i])
        {
            cout << cauthu[i].so_ao << "\t" << cauthu[i].ho_ten << "\t" << cauthu[i].vi_tri << "\t" << cauthu[i].chieu_cao << "\t" << cauthu[i].can_nang << "\t" << cauthu[i].so_tran_dau << endl;
        }
    }
    return 0;
}

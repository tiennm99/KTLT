#include <iostream>
#include <cmath>

using namespace std;

class da_thuc
{
public:
    int bac;
    int *he_so;
    da_thuc(int bac)
    {
        this->bac = bac;
        he_so = new int[bac];
    }
    void xuat()
    {
        if (this->he_so[0] != 0)
        {
            cout << this->he_so[0];
        }
        if (this->he_so[1] != 0)
        {
            cout << " + " << this->he_so[1] << "*x";
        }
        for (int i = 2; i < this->bac; i++)
        {
            if (he_so[i] > 0)
            {
                cout << " + " << this->he_so[i] << "*x^" << i;
            }
            else
            {
                cout << " - " << abs(this->he_so[i]) << "*x^" << i;
            }
        }
    }
    ~da_thuc()
    {
        delete[] he_so;
        he_so = NULL;
    }
};

da_thuc hieu(const da_thuc &dt1, const da_thuc &dt2)
{
    if (dt1.bac > dt2.bac)
    {
        static da_thuc dt(dt1.bac);
        for (int i = 0; i < dt2.bac; i++)
        {
            dt.he_so[i] = dt1.he_so[i] - dt2.he_so[i];
        }
        for (int i = dt2.bac; i < dt1.bac; i++)
        {
            dt.he_so[i] = dt1.he_so[i];
        }
        return dt;
    }
    else
    {
        static da_thuc dt(dt2.bac);
        dt = hieu(dt2, dt1);
        for (int i = 0; i < dt2.bac; i++)
        {
            dt.he_so[i] *= -1;
        }
        return dt;
    }
}

int main()
{
    int ma[3] = {1, 3, 5};
    int mb[4] = {2, 4, 6, 8};
    da_thuc a(3), b(4);
    for (int i = 0; i < 3; i++)
    {
        a.he_so[i] = ma[i];
    }
    for (int i = 0; i < 4; i++)
    {
        b.he_so[i] = mb[i];
    }
    da_thuc c = hieu(b, a);
    c.xuat();
    return 0;
}

#include <iostream>
#include <cmath>

#define EPSILON 1.0E-10

using namespace std;

int ucln(int a, int b)
{
    a = abs(a);
    b = abs(b);
    if (a < b)
    {
        return ucln(b, a);
    }
    else if (b == 0)
    {
        return a;
    }
    else if (a%b == 0)
    {
        return b;
    }
    else
    {
        return ucln(b, a%b);
    }
}

class phan_so
{
private:
    int tu, mau;
public:
    phan_so()
    {
        this->tu = 0;
        this->mau = 1;
    }
    phan_so(phan_so& x)
    {
        this->tu = x.tu;
        this->mau = x.mau;
    }
    phan_so(int tu, int mau)
    {
        this->tu = tu;
        this->mau = mau;
    }
    void set(int tu, int mau)
    {
        this->tu = tu;
        this->mau = mau;
    }
    int get_tu()
    {
        return this->tu;
    }
    int get_mau()
    {
        return this->mau;
    }
    bool la_phan_so_toi_gian()
    {
        if (ucln(this->tu, this->mau) == 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void toi_gian()
    {
        if (this->mau < 0)
        {
            this->tu *= -1;
            this->mau *= -1;
        }
        int uoc = ucln(this->tu, this->mau);
        this->tu /= uoc;
        this->mau /= uoc;
    }
    void xuat_hon_so()
    {
        int uoc = ucln(this->tu, this->mau);
        this->tu /= uoc;
        this->mau /= uoc;
        cout << this->tu/this->mau << "(" << this->tu%this->mau << "/" << this->mau << ")";
    }
    void xuat_phan_so()
    {
        int uoc = ucln(this->tu, this->mau);
        this->tu /= uoc;
        this->mau /= uoc;
        cout << this->tu << "/" << this->mau;
    }
    ~phan_so()
    {
    };
};

bool operator> (phan_so l, phan_so r)
{
    double left = l.get_tu()/l.get_mau();
    double right = r.get_tu()/r.get_mau();
    if (left - right > EPSILON)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool operator< (phan_so l, phan_so r)
{
    double left = l.get_tu()/l.get_mau();
    double right = r.get_tu()/r.get_mau();
    if (right - left > EPSILON)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool operator>= (phan_so l, phan_so r)
{
    double left = l.get_tu()/l.get_mau();
    double right = r.get_tu()/r.get_mau();
    if (left - right > EPSILON || fabs(left - right) < EPSILON)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool operator<= (phan_so l, phan_so r)
{
    double left = l.get_tu()/l.get_mau();
    double right = r.get_tu()/r.get_mau();
    if (right - left > EPSILON || fabs(left - right) < EPSILON)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool operator== (phan_so l, phan_so r)
{
    double left = l.get_tu()/l.get_mau();
    double right = r.get_tu()/r.get_mau();
    if (fabs(left - right) < EPSILON)
    {
        return true;
    }
    else
    {
        return false;
    }
}

phan_so operator- (phan_so l, phan_so r)
{
    int mau = l.get_mau()*r.get_mau();
    int tu = l.get_tu()*r.get_mau() - l.get_mau()*r.get_tu();
    phan_so phanso(tu, mau);
    phanso.toi_gian();
    return phanso;
}

void psac(phan_so ps)
{
    ps.toi_gian();
    int tu = ps.get_tu();
    int mau = ps.get_mau();
    phan_so phanso;
    if (tu > mau)
    {
        cout << tu/mau << " + ";
        phanso.set(tu%mau, mau);
        psac(phanso);
    }
    else if (tu != 1)
    {
        int mau_1 = mau/tu + 1;
        cout << "1/" << mau_1 << " + ";
        phan_so phanso_1(1, mau_1);
        phanso = ps - phanso_1;
        psac(phanso);
    }
    else
    {
        cout << "1/" << mau;
    }
}

int main()
{
    int tu, mau;
    cout << "Nhap tu so: ";
    cin >> tu;
    cout << "Nhap mau so: ";
    cin >> mau;
    phan_so ps(tu, mau);
    cout << ps.get_tu() << "/" << ps.get_mau() << " = ";
    psac(ps);
    return 0;
}

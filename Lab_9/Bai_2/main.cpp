#include <iostream>

using namespace std;

class X
{
public:
    int m_value;
};

class Y: public X
{
public:
    int m_value;
};

class Z: public Y
{
public:
    Z(int vx, int vy, int vz)
    {
        X::m_value = vx;
        Y::m_value = vy;
        Z::m_value = vz;
    }
public:
    int m_value;
};

int main()
{
    Z obj(1, 2, 3);
    cout << "obj = (" << obj.X::m_value << ", " << obj.Y::m_value << ", " << obj.Z::m_value << ")" << endl;
    return 0;
};

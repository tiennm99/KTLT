#include <iostream>

using namespace std;

class X
{
public:
    void display()
    {
        cout << "class X" << endl;
    }
};

class Y: public X
{
public:
    void display()
    {
        cout << "class Y" << endl;
    }
};

class Z: public Y
{
public:
    void display()
    {
        cout << "class Z" << endl;
    }
};

int main(){
    Z obj;
    obj.X::display();
    obj.Y::display();
    obj.Z::display();
    obj.display();
    return 0;
};

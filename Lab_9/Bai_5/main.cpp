#include <iostream>
using namespace std;
class X{
public:
/*(1)*/ void display(){
cout << "Type of \"this\" object is: Class X" << endl;
}
};

class Y: public X
{
public:
    void display()
    {
        cout << "Type of \"this\" object is: Class Y" << endl;
    }
};

class Z: public Y
{
protected:
    void display()
    {
        cout << "Type of \"this\" object is: Class Z" << endl;
    }
};
int main(){
X x;
Y y;
Z z;
x.display(); //OK
y.display(); //OK
z.display(); //Error during compilation
return 0;
};

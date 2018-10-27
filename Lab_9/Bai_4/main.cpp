#include <iostream>
using namespace std;
class X{
public:
/*(1)*/virtual void display(){
cout << "Type of \"this\" object is: Class X" << endl;
}
};
class Y: public X{
public:
void display(){
cout << "Type of \"this\" object is: Class Y" << endl;
}
};
class Z: public Y{
public:
void display(){
cout << "Type of \"this\" object is: Class Z" << endl;
}
};
int main(){
cout << "Call method via NON-POINTER variable - CASE I:" << endl;
X x;
Y y;
Z z;
x.display();
y.display();
z.display();
/////////////////
cout << " Call method via NON-POINTER variable - CASE II:" << endl;
X x1, x2, x3;
Y y2;
Z z3;
x2 = y2; x3 = z3; //ATTENTION
x1.display();
x2.display();
x3.display();
/////////////////
cout << " Call method via POINTER variable - CASE I:" << endl;
X *px = new X();
Y *py = new Y();
Z *pz = new Z();
px->display();
py->display();
pz->display();
delete px;
delete py;
delete pz;

	/////////////////
cout << " Call method via POINTER variable - CASE II:" << endl;
X *px1 = new X();
X *px2 = new Y(); //ATTENTION
X *px3 = new Z(); //ATTENTION
px1->display();
px2->display();
px3->display();
delete px1;
delete px2;
delete px3;
return 0;
};

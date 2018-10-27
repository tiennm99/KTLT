#include <iostream>
#include <iomanip>
#include "Date.h"

using namespace std;

int main()
{
    Date d1, d2;
    cout << "Enter date:";
    cin >> d1;
    cout << "Enter date:";
    cin >> d2;

    cout << "Date 1:" << d1 << endl;
    cout << "Date 2:" << d2 << endl;
    cout << (d1 < d2? "d1 < d2" : "d1 >= d2") << endl;

    Date d3(25,2,2017);
    cout << d3.toString() << endl;

    return 0;
}

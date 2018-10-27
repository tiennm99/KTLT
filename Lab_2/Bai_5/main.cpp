#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int i;
    cout << "Type\t\tSize\tMinValue\tMaxValue" << endl;
    for(i=0; i<52; i++)
        cout << "=";
    cout << endl;
    cout << "char\t\t"          << sizeof(char)             << "\t"     << CHAR_MIN     << "\t\t"  << CHAR_MAX     << endl;
    cout << "unsigned char\t"   << sizeof(unsigned char)    << "\t"     << 0            << "\t\t"  << UCHAR_MAX     << endl;
    cout << "short\t\t"         << sizeof(short)            << "\t"     << SHRT_MIN     << "\t\t"  << SHRT_MAX      << endl;
    cout << "unsigned short\t"  << sizeof(unsigned short)   << "\t"     << 0            << "\t\t"  << USHRT_MAX     << endl;
    cout << "int\t\t"           << sizeof(int)              << "\t"     << INT_MIN      << "\t"    << INT_MAX       << endl;
    cout << "unsigned int\t"    << sizeof(unsigned int)     << "\t"     << 0            << "\t\t"  << UINT_MAX      << endl;
    cout << "long\t\t"          << sizeof(long)             << "\t"     << LONG_MIN     << "\t"    << LONG_MAX      << endl;
    cout << "unsigned long\t"   << sizeof(unsigned long)    << "\t"     << 0            << "\t\t"  << ULONG_MAX     << endl;
    for(i=0; i<52; i++)
        cout << "=";
    return 0;
}

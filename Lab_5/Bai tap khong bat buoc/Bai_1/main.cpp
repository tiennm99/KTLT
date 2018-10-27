#include <iostream>

#define MAX_SIZE 100

using namespace std;

int main()
{
    int i = 0;
    char s[MAX_SIZE];
    cin.getline(s, MAX_SIZE);
    while (s[i] != '\0')
    {
        i++;
    }
    cout << "Do dai chuoi la: " << i << endl;
    return 0;
}

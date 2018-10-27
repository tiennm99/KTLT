#include <iostream>

#define MAX_SIZE 100

using namespace std;

int main()
{
    int do_dai = 0, i, j, k;
    char s[MAX_SIZE];
    cin.getline(s, MAX_SIZE);
    while (s[do_dai] != '\0')
    {
        do_dai++;
    }
    for (i = 0; i < do_dai; i++)
    {
        if (s[i] == ' ')
        {
            j = i;
            do
            {
                j++;
            } while (s[j] == ' ');
            if (i == 0)
            {
                k = j - i;
                for (j = i; j < do_dai - k; j++)
                {
                    s[j] = s[j + k];
                }
            }
            else
            {
                k = j - (i + 1);
                for (j = i + 1; j < do_dai - k; j++)
                {
                    s[j] = s[j + k];
                }
            }
            do_dai -= k;
            s[do_dai] = '\0';
        }
    }
    if (s[do_dai - 1] == ' ')
    {
        s[do_dai - 1] = '\0';
    }
    for (i = 0; i < do_dai; i++)
    {
        cout << s[i];
    }
    cout << endl;
    return 0;
}

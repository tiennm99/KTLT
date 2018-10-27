#include <iostream>

#define MAX_SIZE 100

using namespace std;

int main()
{
    int do_dai = 0, i, j, k;
    char s[MAX_SIZE], t;
    cin.getline(s, MAX_SIZE);
    while (s[do_dai] != '\0')
    {
        do_dai++;
    }
    for (i = 0; i < do_dai/2; i++)
    {
        t = s[i];
        s[i] = s[do_dai - (i + 1)];
        s[do_dai - (i + 1)] = t;
    }
    i = 0;
    while (i < do_dai)
    {
        if (s[i] != ' ')
        {
            for (j = i + 1; j <= do_dai; j++)
            {
                if (s[j] == ' ' || j == do_dai)
                {
                    for (k = i; k < i + (j - i)/2; k++)
                    {
                        t = s[k];
                        s[k] = s[i + j - (k + 1)];
                        s[i + j - (k + 1)] = t;
                    }
                    break;
                }
            }
            i = j;
        }
        i++;
    }
    for (i = 0; i < do_dai; i++)
    {
        cout << s[i];
    }
    cout << endl;
    return 0;
}

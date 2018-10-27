#include <iostream>

using namespace std;

int main()
{
    int ech[7] = {1, 1, 1, 0, -1, -1, -1};
    int ech_xong[7] = {-1, -1, -1, 0, 1, 1, 1};
    int buoc = 0, i, trong = 3;
    bool hoanthanh = 0;
    while (!hoanthanh)
    {
        hoanthanh = 1;
        for (i = 0; i < 7; i++)
        {
            if (ech[i] != ech_xong[i])
            {
                hoanthanh = 0;
                break;
            }
        }
        cout << "Buoc thu " << buoc++ << ":\t";
        for (i = 0; i < 7; i++)
        {
            if (ech[i])
            {
                if (ech[i] == 1)
                {
                    cout << ">";
                }
                else
                {
                    cout << "<";
                }
            }
            else
            {
                cout << "0";
            }
        }
        cout << endl;
        if (trong > 1 && ech[trong - 2] == 1 && ech[trong - 1] == -1)
        {
            ech[trong - 2] = 0;
            ech[trong] = 1;
            trong -= 2;
        }
        else
        {
            if (trong < 6 && ech[trong + 2] == -1 && ech[trong + 1] == 1)
            {
                ech[trong + 2] = 0;
                ech[trong] = -1;
                trong += 2;
            }
            else
            {
                if (ech[trong - 1] == 1 && !(ech[trong - 2] == -1 && ech[trong + 1] == -1))
                {
                    ech[trong - 1] = 0;
                    ech[trong] = 1;
                    trong -= 1;
                }
                else
                {
                    if (ech[trong + 1] == -1 && !(ech[trong - 1] == 1 && ech[trong + 2] == 1))
                    {
                        ech[trong + 1] = 0;
                        ech[trong] = -1;
                        trong += 1;
                    }
                }
            }
        }
    }
    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    unsigned int chi_so;
    float tong_tien;
    cout << "Nhap chi so dien nang tieu thu: ";
    cin >> chi_so;
    if (chi_so <= 50)
    {
        tong_tien = chi_so*1484;
    }
    else
    {
        if (chi_so <= 100)
        {
            tong_tien = 74200 + (chi_so - 50)*1533;
        }
        else
        {
            if (chi_so <= 200)
            {
                tong_tien = 150850 + (chi_so - 100)*1786;
            }
            else
            {
                if (chi_so <= 300)
                {
                    tong_tien = 329450 + (chi_so - 200)*2242;
                }
                else
                {
                    if (chi_so <= 400)
                    {
                        tong_tien = 553650 + (chi_so - 300)*2503;
                    }
                    else
                    {
                        tong_tien = 803950 + (chi_so - 400)*2587;
                    }
                }
            }
        }
    }
    tong_tien = tong_tien*110/100;
    cout << "Tien dien sinh hoat ung voi " << chi_so << "kWh la " << tong_tien << "dong.";
    return 0;
}

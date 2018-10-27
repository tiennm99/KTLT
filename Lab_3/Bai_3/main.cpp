#include <iostream>
#include <cmath>
#define EPSILON 1.0E-13
using namespace std;

int main()
{
    double a, b, c;
    enum tam_giac
    {
        TAM_GIAC_THUONG,
        TAM_GIAC_VUONG,
        TAM_GIAC_CAN,
        TAM_GIAC_DEU,
        TAM_GIAC_VUONG_CAN
    };
    char* loai_tam_giac[] =
    {
        "tam giac thuong.",
        "tam giac vuong.",
        "tam giac can.",
        "tam giac deu.",
        "tam giac vuong can."
    };
    tam_giac tg;
    cout << "Nhap do dai ba canh cua tam giac: ";
    cin >> a >> b >> c;
    if(
       ((a + b - c) > EPSILON) &&
       ((b + c - a) > EPSILON) &&
       ((c + a - b) > EPSILON)
       )
    {
        if (fabs(a - b) <= EPSILON)
        {
            if (fabs(a - c) <= EPSILON)
            {
                tg=TAM_GIAC_DEU;
            }
            else
            {
                if (fabs(a*a + b*b - c*c) <= EPSILON)
                {
                    tg=TAM_GIAC_VUONG_CAN;
                }
                else
                {
                    tg=TAM_GIAC_CAN;
                }
            }
        }
        else
        {
            if (fabs(a*a + b*b - c*c) <= EPSILON)
            {
                tg=TAM_GIAC_VUONG;
            }
            else
            {
                tg=TAM_GIAC_THUONG;
            }
        }
        if (tg==TAM_GIAC_THUONG)
        {
            if (fabs(b - c) <= EPSILON)
            {
                if (fabs(b - a) <= EPSILON)
                {
                    tg=TAM_GIAC_DEU;
                }
                else
                {
                    if (fabs(b*b + c*c - a*a) <= EPSILON)
                    {
                        tg=TAM_GIAC_VUONG_CAN;
                    }
                    else
                    {
                        tg=TAM_GIAC_CAN;
                    }
                }
            }
            else
            {
                if (fabs(b*b + c*c - a*a) <= EPSILON)
                {
                    tg=TAM_GIAC_VUONG;
                }
                else
                {
                    tg=TAM_GIAC_THUONG;
                }
            }
        }
        if (tg==TAM_GIAC_THUONG)
        {
            if (fabs(c - a <= EPSILON))
            {
                if (fabs(c - b) <= EPSILON)
                {
                    tg=TAM_GIAC_DEU;
                }
                else
                {
                    if (fabs(c*c + a*a - b*b) <= EPSILON)
                    {
                        tg=TAM_GIAC_VUONG_CAN;
                    }
                    else
                    {
                        tg=TAM_GIAC_CAN;
                    }
                }
            }
            else
            {
                if (fabs(c*c + a*a - b*b) <= EPSILON)
                {
                    tg=TAM_GIAC_VUONG;
                }
                else
                {
                    tg=TAM_GIAC_THUONG;
                }
            }
        }
        cout << "Tam giac da cho la " << loai_tam_giac[tg] << endl;
    }
    else
    {
        cout << "Do dai ba canh vua nhap khong phai la tam giac.";
    }
    return 0;
}

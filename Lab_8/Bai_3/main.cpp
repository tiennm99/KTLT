//main.cpp
#include "Bai_3.h"

int main()
{
    _setmode(_fileno(stdout), 0x00020000);

	khoi_dong();
	wcout << "Trang thai khoi dong: " << endl;
	hien_thi();

    for (int i = 0; i < 100; i++)
    {
        wcout << "=";
    }
    wcout << endl;

	tron_bai();
	wcout << "Sau khi tron bai: " << endl;
	hien_thi();

	return 0;
}

void khoi_dong()
{
    for (int i = 0; i < 52; i++)
    {
        bai[i].so = bo_so[i%13];
        bai[i].chat = bo_chat[i/13];
    }
}

void hien_thi()
{
    for (int i = 0; i <52; i++)
    {
        wcout << bai[i].so << bai[i].chat << "\t";
        if (i%13 == 12)
        {
            wcout << endl;
        }
    }
}

void tron_bai()
{
    srand(time(NULL));
    while(so_lan_tron--)
    {
        int random_1 = rand()*52/RAND_MAX;
        int random_2 = random_1 + rand()*(52 - random_1)/RAND_MAX;
        for (int i = 0; i < 52; i++)
        {
            bai_tam[i] = bai[i];
        }
        for (int i = 0; i < random_1; i++)
        {
            bai[i + random_2 - random_1] = bai_tam[i];
        }
        for (int i = 0; i < random_2 - random_1; i++)
        {
            bai[i] = bai_tam[i + random_1];
        }
    }
}

/*
void tron_bai()
{
    srand(time(NULL));
    while(so_lan_tron--)
    {
        int random_1 = rand()*52/RAND_MAX;
        int random_2 = rand()*52/RAND_MAX;
        Bai tam = bai[random_1];
        bai[random_1] = bai[random_2];
        bai[random_2] = tam;
    }
}
*/

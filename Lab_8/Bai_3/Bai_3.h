//Bai_3.h
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <stdio.h>
#include <time.h>
#include <string>
#include <io.h>

using namespace std;

typedef struct
{
	wchar_t chat;
	char* so;
} Bai;

wchar_t bo_chat[4] = {L'♠', L'♣', L'♦', L'♥'};
char* bo_so[13] = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
int so_lan_tron = 100;
Bai bai[52], bai_tam[52];

void khoi_dong();
void hien_thi();
void tron_bai();

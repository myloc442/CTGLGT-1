#include<iostream>
#include<conio.h>
#include<fstream>
#include<string.h>
#include<iomanip>

using namespace std;

#include "thuvien.h"
#include "menu.h"

void ChayChuongTrinh();

int main()
{
	ChayChuongTrinh();
	_getch();
	return 1;
}

void ChayChuongTrinh()
{
	int soMenu = 5;
	int tuyChonMenu;
	int n = 0;
	HocVien hv[100];
	do
	{
		tuyChonMenu = ChonMenu(soMenu);
		XuLyMenu(tuyChonMenu, hv, n);
	} while (tuyChonMenu > 0);
}
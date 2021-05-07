#include<iostream>
#include<conio.h>
#include<fstream>
#include<string.h>
#include<iomanip>

using namespace std;

#include "2011402_thuvien.h"
#include "2011402_menu.h"

void ChayChuongTrinh();

int main()
{
	ChayChuongTrinh();
	system("pause");
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
		system("cls");
	} while (tuyChonMenu > 0);
}
#include <iostream>
#include <conio.h>
#include <fstream>
#include <iomanip>

using namespace std;

#include "thuvien.h"
#include "menu.h"

void ChayChuongTrinh();

int main()
{
	ChayChuongTrinh();
	_getch();
	return 0;
}

void ChayChuongTrinh()
{
	sinhvien a[MAX];
	int soMenu = 5,
		menu,
		n = 0; //so luong sinh vien trong danh sach
		//Vận hành hệ thống menu
	do
	{
		system("CLS");
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, n);
		_getch();
	} while (menu > 0);

}


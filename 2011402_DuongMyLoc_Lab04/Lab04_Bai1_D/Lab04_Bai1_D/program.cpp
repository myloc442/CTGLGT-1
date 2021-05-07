#include <iostream>
#include <conio.h>
#include <iomanip>
#include <fstream>

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
	int tuyChon = 0, soMenu = 18;
	LIST l;
	do
	{
		tuyChon = ChonMenu(soMenu);
		XuLyMenu(tuyChon, l);
	} while (tuyChon > 0);
}
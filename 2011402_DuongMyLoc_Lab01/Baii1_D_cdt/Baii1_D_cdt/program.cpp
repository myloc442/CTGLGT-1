#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

#include "Thuvien.h"

void ChayChuongTrinh();

int main()
{
	ChayChuongTrinh();
	return 1;
}
void ChayChuongTrinh()
{
	int a[MAX], n;
	int l, r;
	int min = 0, max = 0;
	cout << "Nhap do dai cua mang : "; cin >> n;
	NhapDay(a, n);
	cout << "\nGia tri l = "; cin >> l;
	cout << "\nGia tri r = "; cin >> r;
	MinMax(a, l, r, min, max);
	cout << "\nDay da cho la: \n";
	XuatDay(a, n);
	cout << "\nMin cua a[" << l << ";" << r << "] la: " << min;
	cout << "\nMax cua a[" << l << ";" << r << "] la: " << max << endl;
	system("PAUSE");
}
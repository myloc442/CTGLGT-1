#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

#include "thuvien.h"

void ChayChuongTrinh();

int main()
{
	ChayChuongTrinh();
	return 1;
}

void ChayChuongTrinh()
{
	int a[MAX];
	int m, n;
	cout << "\nNhap do dai cua mang: "; cin >> n;
	NhapDay(a, n);
	cout << "Nhap gia m: "; cin >> m;
	cout << "\nDay ban dau la: \n";
	XuatDay(a,n);
	Transpose(a,n,m);
	cout << "\nDay ket qua: \n";
	XuatDay(a,n);
	cout << endl;
	system("PAUSE");
}
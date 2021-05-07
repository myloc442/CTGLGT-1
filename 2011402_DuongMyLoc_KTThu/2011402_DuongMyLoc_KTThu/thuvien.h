#pragma once
#define MAX 100

struct HocVien
{
	char maHV[8];
	char hoHV[7];
	char tenLotHV[14];
	char tenHV[7];
	char lop[6];
	int namSinh;
	double diem;
	int queQuan;
};
int TaoDanhSachHocVien(HocVien a[], int& n, char* filename)
{
	ifstream Nhap(filename);
	if (!Nhap)
		return 0;
	else
	{
		n = 0;
		while (!Nhap.eof())
		{
			Nhap >> a[n].maHV;
			Nhap >> a[n].hoHV;
			Nhap >> a[n].tenLotHV;
			Nhap >> a[n].tenHV;
			Nhap >> a[n].lop;
			Nhap >> a[n].namSinh;
			Nhap >> a[n].diem;
			Nhap >> a[n].queQuan;
			n++;
		}
		Nhap.close();
		return 1;
	}
}
void Ke_Duong(char kyTu)
{
	cout << setiosflags(ios::left) << '|';
	for (int i = 0; i < 76; i++)
	{
		cout << kyTu;
	}
	cout << '|';
}
void Tieu_De()
{
	Ke_Duong('=');
	cout << '\n' << setiosflags(ios::left) << '|'
		<< setw(12) << "Ma sinh vien" << '|'
		<< setw(7) << "Ho " << '|'
		<< setw(14) << "Ten va ho lot" << '|'
		<< setw(7) << "Ten" << '|'
		<< setw(8) << "Lop" << '|'
		<< setw(8) << "Nam sinh" << '|'
		<< setw(4) << "Diem" << '|'
		<< setw(9) << "Que quan" << '|' << '\n';
	Ke_Duong('=');
}
void Thong_Bao(int tong)
{
	cout << '\n' << setiosflags(ios::left) << '|'
		<< setw(50) << "TONG NHAN VIEN VIEN TRONG DANH SACH LA : " << setw(26) << tong << '|' << "\n";
	Ke_Duong('=');
}
void Xuat_1_HV(HocVien a)
{
	cout << '\n' << setiosflags(ios::left) << '|'
		<< setw(12) << a.maHV << '|'
		<< setw(7) << a.hoHV << '|'
		<< setw(14) << a.tenLotHV << '|'
		<< setw(7) << a.tenHV << '|'
		<< setw(8) << a.lop << '|'
		<< setw(8) << a.namSinh << '|'
		<< setw(4) << a.diem << '|'
		<< setw(9) << a.queQuan << '|' << '\n';
	Ke_Duong('_');
}
void Xuat_DanhSach_HV(HocVien a[MAX], int n)
{
	Tieu_De();
	for (int i = 0; i < n; i++)
	{
		Xuat_1_HV(a[i]);
	}
	Thong_Bao(n);
}
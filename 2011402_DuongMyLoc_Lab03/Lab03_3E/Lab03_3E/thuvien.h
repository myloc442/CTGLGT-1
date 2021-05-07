#pragma once
#define MAX 100

struct nhanvien
{
	char maNV[8];
	char hoNV[10];
	char tenLot[10];
	char ten[10];
	string diaChi;
	int namSinh;
	long luong;
};

// Khai bao nguyen mau ham


// Dinh nghia ham
// Doc file du lieu tu file text
int File_Array(char* filename, nhanvien a[MAX], int& n)
{
	ifstream in(filename);
	if (!in) // neu khong phai file text truyen vao thi return 0
		return 0;
	n = 0;
	while (!in.eof()) // doc cho het file 
	{
		in >> a[n].maNV;
		in >> a[n].hoNV;
		in >> a[n].tenLot;
		in >> a[n].ten;
		in >> a[n].diaChi;
		in >> a[n].namSinh;
		in >> a[n].luong;
		n++;
	}
	in.close();
	return 1;
}
//Tieu de
void Heading()
{
	int i;
	cout << "\n";
	cout << ':';
	for (i = 1; i <= 92; i++)
		cout << '=';
	cout << ':';
	cout << "\n";
	cout << setiosflags(ios::left);
	cout << ':';
	cout << setw(9) << "Ma SV"
		<< ':'
		<< setw(38) << " Ho va Ten nhan vien"
		<< ':'
		<< setw(20) << "Dia chi"
		<< ':'
		<< setw(6) << "NS"
		<< ':'
		<< setw(15) << "Luong"
		<< ':';
	cout << "\n";
	cout << ':';
	for (i = 1; i <= 92; i++)
		cout << '=';
	cout << ':';
	cout << "\n";
}

// Xuat 1 nhan vien
void Output_Struct(nhanvien p)
{
	cout << ':';
	cout << setiosflags(ios::left)
		<< setw(9) << p.maNV
		<< ':'
		<< setw(18) << p.hoNV
		<< setw(10) << p.tenLot
		<< setw(10) << p.ten
		<< ':'
		<< setw(20) << p.diaChi
		<< ':'
		<< setw(6) << p.namSinh
		<< ':'
		<< setw(15) << p.luong
		<< ':';
}

// Xuat danh sach nhan vien
void Output_Arr(nhanvien a[MAX], int n)
{
	int i;
	Heading();
	for (i = 0; i < n; i++)
	{
		Output_Struct(a[i]);
		cout << '\n';
	}
	cout << ':';
	for (i = 1; i <= 92; i++)
		cout << '=';
	cout << ':';
	cout << "\n";
}

//
//Sap theo co so
void Radix(nhanvien a[MAX], int n)
{
	int max, m;
	max = a[0].namSinh; m = 0;
	int k, i, j, du, thuong;
	int b0[MAX], b1[MAX], b2[MAX], b3[MAX], b4[MAX], b5[MAX],
		b6[MAX], b7[MAX], b8[MAX], b9[MAX];
	int p0, p1, p2, p3, p4, p5, p6, p7, p8, p9;
	//Tim max(a)
	for (i = 0; i < n; i++)
		if (a[i].namSinh > max)
			max = a[i].namSinh;
	//Xac dinh so cac chu so cua max(a) : m
	while (max != 0)
	{
		max = max / 10;
		m++;
	}
	k = 0; //khoi tao chu so k = 0 : hang don vi
	while (k < m)
	{
		p0 = p1 = p2 = p3 = p4 = p5 = p6 = p7 = p8 = p9 = 0;//khoi tao chi so cua cac lo
		for (i = 0; i < n; i++)
		{
			//xac dinh chu so hang k cua a[i] : du
			thuong = a[i].namSinh;
			for (j = 0; j <= k; j++)
			{
				du = thuong % 10;
				thuong = thuong / 10;
			}
			//Phan vao cac lo
			switch (du)
			{
			case 0: b0[p0++] = a[i].namSinh;
				break;
			case 1: b1[p1++] = a[i].namSinh;
				break;
			case 2: b2[p2++] = a[i].namSinh;
				break;
			case 3: b3[p3++] = a[i].namSinh;
				break;
			case 4: b4[p4++] = a[i].namSinh;
				break;
			case 5: b5[p5++] = a[i].namSinh;
				break;
			case 6:b6[p6++] = a[i].namSinh;
				break;
			case 7: b7[p7++] = a[i].namSinh;
				break;
			case 8: b8[p8++] = a[i].namSinh;
				break;
			case 9: b9[p9++] = a[i].namSinh;
				break;
			}
		}//Phan xong vao cac lo khi xet hang k
		//Noi lai theo trinh tu de co day a tang theo hang k
		j = 0;
		for (i = 0; i < p0; i++)
			a[j++].namSinh = b0[i];
		for (i = 0; i < p1; i++)
			a[j++].namSinh = b1[i];
		for (i = 0; i < p2; i++)
			a[j++].namSinh = b2[i];
		for (i = 0; i < p3; i++)
			a[j++].namSinh = b3[i];
		for (i = 0; i < p4; i++)
			a[j++].namSinh = b4[i];
		for (i = 0; i < p5; i++)
			a[j++].namSinh = b5[i];
		for (i = 0; i < p6; i++)
			a[j++].namSinh = b6[i];
		for (i = 0; i < p7; i++)
			a[j++].namSinh = b7[i];
		for (i = 0; i < p8; i++)
			a[j++].namSinh = b8[i];
		for (i = 0; i < p9; i++)
			a[j++].namSinh = b9[i];
		k++; //xet tiep hang k lon hon, khi k = m thi dung
	}
}

//hàm chọn trực tiếp

void Selection_L(nhanvien a[MAX], int n)
{
	int i, j, cs_min;
	for (i = 0; i < n - 1; i++)
	{
		cs_min = i;
		for (j = i + 1; j < n; j++)
			if (a[j].maNV < a[cs_min].maNV)
				cs_min = j;
		swap(a[i].maNV, a[cs_min].maNV);
	}
}
//Tai moi buoc, chen PT hien hanh vao mang con ben trai tang dan
void InsertionSort(nhanvien a[MAX], int n)
{
	int i, j;
	string str;
	for (i = 1; i < n; i++)
	{
		str = a[i].diaChi;
		j = i - 1;

		/* Di chuyển các phần tử có giá trị lớn hơn giá trị
		key về sau một vị trí so với vị trí ban đầu
		của nó */
		while (j >= 0 && a[j].diaChi > str)
		{
			a[j + 1].diaChi = a[j].diaChi;
			j = j - 1;
		}
		a[j + 1].diaChi = str;
	}
}

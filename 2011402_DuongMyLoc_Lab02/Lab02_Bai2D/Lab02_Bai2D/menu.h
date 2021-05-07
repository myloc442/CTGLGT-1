#pragma once
// Tim nguyen mau ham 
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, int a[MAX], int& n);

// Dinh nghia ham
void XuatMenu()
{
	cout << "\n============================ He thong chuc nang ========================";
	cout << "\n0. Thoat khoi chuong trinh";
	cout << "\n1. Tao danh sach sinh vien ";
	cout << "\n2. Xem danh sach sinh vien";
	cout << "\n3. Tim kiem theo ma sinh vien";
	cout << "\n4. Tim kiem theo ten-Xuat cac sinh vien cung ten";
	cout << "\n5. Tim kiem theo ho-Xuat cac sinh vien cung ho";
	cout << "\n6. Xuat sinh vien co diem trung binh >= dtb cho truoc";
	cout << "\n7. Tim kiem theo lop-Xuat danh sach sinh vien trong lop";
	cout << "\n8. Tim kiem nhi phan theo tich luy (neu truong tich luy co thu tu)";
	cout << "\nCre: Duong My Loc - CTK44B - 2011402";
	cout << "\n========================================================================";
}
int ChonMenu(int soMenu)
{
	int stt;
	for (;;)
	{
		system("CLS"); //xoa man hinh
		XuatMenu();
		cout << "\nMoi ban chon chuc nang >> ";
		cin >> stt;
		if (0 <= stt && stt <= soMenu)
			break;
	}
	return stt;
}
void XuLyMenu(int menu, sinhvien a[MAX], int& n)
{
	int kq;
	char filename[MAX];
	int vt;
	switch (menu)
	{
	case 0:
		system("CLS");
		cout << "\n0. Thoat khoi chuong trinh\n";
		break;
	case 1:
		system("CLS");
		cout << "\n1. Tao danh sach sinh vien";
		do
		{
			cout << "\nNhap ten tap tin, filename = ";
			cin >> filename;
			kq = TapTin_MangCT(filename, a, n);
		} while (!kq);
		cout << "\nDanh sach sinh vien vua nhap:\n";
		Xuat_DSSV(a, n);
		cout << endl;
		break;
	case 2:
		system("CLS");
		cout << "\n2. Xem danh sach sinh vien\n";
		cout << "\nDanh sach sinh vien hien hanh:\n";
		Xuat_DSSV(a, n);
		cout << endl;
		break;
	case 3:
		system("CLS");
		cout << "\n3. Tim kiem theo ma sinh vien";
		char mssv[10];
		cout << "\nNhap ma so sinh vien:", cin >> mssv;
		vt = Tim_MaSo_DauTien(mssv, a, n);
		if (vt == -1)
			cout << "Khong tim thay sinh vien";
		else
			cout << "Vi tri sinh vien la: " << vt << "\n";
		break;
	case 4:
		system("CLS");
		cout << "\n4. Tim kiem theo ten--Xuat cac sinh vien cung ten\n";
		char ten[10];
		cout << "Nhap ten: ", cin >> ten;
		Tim_TheoTen(ten, a, n);
		cout << "\n";
		break;
	case 5:
		system("CLS");
		cout << "\n5. Tim kiem theo ho--Xuat cac sinh vien cung ho\n";
		char ho[10];
		cout << "Nhap ten: ", cin >> ho;
		Tim_TheoHo(ho, a, n);
		cout << "\n";
		break;
	case 6:
		system("CLS");
		cout << "\n6. Xuat sinh vien co diem trung binh >= dtb cho truoc\n";
		float dtb;
		cout << "Nhap diem trung binh: ", cin >> dtb;
		Tim_TheoDTB(dtb, a, n);
		cout << "\n";
		break;
	case 7:
		system("CLS");
		cout << "\n7. Tim kiem theo lop--Xuat cac sinh vien thuoc lop\n";
		char lop[6];
		cout << "Nhap lop: ", cin >> lop;
		Tim_TheoLop(lop, a, n);
		cout << "\n";
		break;
	case 8:
		system("CLS");
		cout << "\n8. Tim kien nhi phan theo tich luy";
		TKNP_Theo_TichLuy(a, n);


		break;
	}
	_getch();
}
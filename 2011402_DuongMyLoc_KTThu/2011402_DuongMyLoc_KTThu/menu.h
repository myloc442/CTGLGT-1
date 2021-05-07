#pragma once
void XuatMenu()
{
	cout << "_____________MENU TUY CHON_____________";
	cout << "\n0. Thoat khoi chuong trinh!";
	cout << "\n1. Tao danh sach hoc vien";
	cout << "\n2. Xem danh sach hoc vien";
	cout << "\n3. Chuc nang 3";
	cout << "\n4. Chuc nang 4";
	cout << "\n5. Chuc nang 5";
	cout << "\nCre: Duong My Loc - 2011402";
	cout << "\n_______________________________________\n";
}
int ChonMenu(int soMenu)
{
	int stt;
	for (;;)
	{
		system("cls");
		XuatMenu();
		cout << "Moi ban chon chuc nang >> ";
		cin >> stt;
		if (stt >= 0 && stt <= soMenu)
			break;
	}
	return stt;
}
void XuLyMenu(int stt, HocVien a[], int&n)
{
	int check;
	char* filename;
	switch (stt)
	{
	case 0:
		system("cls");
		cout << "\nOK. CHUONG TRINH DA THOAT!!!\n";
		exit(0);
		break;
	case 1:
		filename = new char[MAX];
		do
		{
			system("cls");
			cout << "\nTao danh sach nhan vien\n";
			cout << "Nhap file .txt: ";
			cin >> filename;
			check = TaoDanhSachHocVien(a, n, filename);
		} while (!check);

		cout << "\nDa mo tap tin " << filename << " thanh cong\n";
		delete[] filename;
		break;
	case 2:
		system("cls");
		cout << "\nXem danh sach nhan vien\n";
		cout << "\n\n\t\t\t\tDANH SACH NHAN VIEN\n";
		Xuat_DanhSach_HV(a, n);
		break;
	default:
		break;
	}
	_getch();
}
#pragma once
// Định nghĩa nguyên mẫu hàm
void XuatMenu();
int ChonMenu();
void XuLyMenu(int menu, int[MAX], int& n);

/// <summary>
/// Hàm xuất các tên chức năng của chương trình
/// </summary>
void XuatMenu()
{
	cout << "\n============================ He thong chuc nang ==========================";
	cout << "\n0. Thoat khoi chuong trinh";
	cout << "\n1. Nhap du lieu tu file .txt";
	cout << "\n2. Xem du lieu";
	cout << "\n3. Dung thuat giai chon truc tiep de sap danh sach tang theo ma nhan vien";
	cout << "\n4. Dung thuat giai chen truc tiep de sap danh sach tang dan theo dia chi";
	cout << "\n5. Dung thuat giai radix de sap danh sach tang theo nam sinh";
	cout << "\nCre: Duong My Loc - CTK44B - 2011402";
	cout << "\n==========================================================================\n";
}
/// <summary>
/// Hàm điều khiển người dùng chọn chỉ số chức năng hợp lệ : từ 0 đến soMenu
/// </summary>
/// <param name="soMenu"></param>
/// <returns></returns>
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

/// <summary>
/// Xử lý menu các chức năng theo yêu cầu
/// </summary>
/// <param name="stt"></param>
/// <param name="a"></param>
/// <param name="n"></param>
void XuLyMenu(int stt, nhanvien a[MAX], int& n)
{
	char filename[MAX];
	int kq;
	system("cls");
	switch (stt)
	{
	case 0:
		cout << "\n0. Thoat khoi chuong trinh\n";
		cout << "\nPress one key to continue!";
		return;
	case 1:
		cout << "\n1. Nhap du lieu tu file .txt";
		do
		{
			cout << "\nNhap ten tap tin, filename = ";
			cin >> filename;
			kq = File_Array(filename, a, n);
		} while (!kq);

		cout << "\nDanh sach nhan vien vua nhap:\n";
		Output_Arr(a, n);
		cout << endl;
		break;
	case 2:
		cout << "\nDanh sach nhan vien vua nhap:\n";
		Output_Arr(a, n);
		break;
	case 3:
		cout << "\n3. Dung thuat giai chon truc tiep de sap danh sach tang theo ma nhan vien";
		cout << "\nDanh sach nhan vien vua nhap:\n";
		Output_Arr(a, n);
		cout << "\nDanh sach nhan vien sau khi sap xep tang dan theo ma nhan vien bang thuat toan chon truc tiep";
		Radix(a, n);
		Output_Arr(a, n);
		break;
	case 4:
		cout << "\n4. Dung thuat giai chen truc tiep de sap danh sach tang dan theo dia chi";
		cout << "\nDanh sach nhan vien vua nhap:\n";
		Output_Arr(a, n);
		cout << "\nDanh sach nhan vien sau khi sap xep tang dan theo dia chi bang thuat toan chen truc tiep";
		InsertionSort(a, n);
		Output_Arr(a, n);
		break;
	case 5:
		cout << "\n5. Dung thuat giai radix de sap danh sach tang theo nam sinh";
		cout << "\nDanh sach nhan vien vua nhap:\n";
		Output_Arr(a, n);
		cout << "\nDanh sach nhan vien sau khi sap xep tang dan theo nam sinh bang thuat toan Radix";
		Radix(a, n);
		Output_Arr(a, n);
		break;
	}
}
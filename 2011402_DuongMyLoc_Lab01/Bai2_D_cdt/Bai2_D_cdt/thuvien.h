#pragma once
const int MAX = 100;
void NhapDay(int a[MAX], int n)
{
	int i;
	for (i = 1; i <= n; i++)
	{
		a[i] = i;
	}
}
void XuatDay(int a[MAX], int n)
{
	for (int i = 1; i <= n; i++)
	{
		cout << a[i] << '\t';
	}
}
void HoanVi(int& x, int& y)
{
	int tmp = x;
	x = y;
	y = tmp;
}
void Exchange(int a[MAX], int i, int j, int m)
{
	for (int k = 0; k <= m - 1; k++)
		HoanVi(a[i + k], a[j + k]);
}
void Transpose(int a[MAX], int n, int m)
{
	int i, j;
	i = m;
	j = n - m;
	m = m + 1;
	while (i != j)
	{
		if (i > j)
		{
			Exchange(a, m - i, m, j);
			i = i - j;
		}
		else
		{
			j = j - i;
			Exchange(a, m - i, m + j, i);
		}
	}
	Exchange(a, m - i, m, i);
}
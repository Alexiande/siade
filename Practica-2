#include <iostream>
#include <cstdlib>
#include <windows.h>
using namespace std;
unsigned long long int C = 0, M = 0, n, f;
double fa;


void test()
{
	int ar[10];
	int ar2[10];
	cout << "Введите через пробел 10 целых элементов массива" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> ar[i];
		ar2[i] = ar[i];
	}
	cout << "Сортировка Шелла" << endl;
	cout << "Отсортированный тестовый массив: ";
	int d = 10;
	d = d / 2;
	while (d > 0)
	{
		for (int i = 0; i < 10 - d; i++)
		{
			int j = i;
			while (j >= 0 && ar[j] > ar[j + d])
			{
				swap(ar[j], ar[j + d]);
				j--;
			}
		}
		d = d / 2;
	}
	for (int i = 0; i < 10; i++)
		cout << ar[i] << " ";
	cout << endl;
	for (int i = 0; i < 10; i++)
	cout << ar2[i] << " ";
};

bool compare(int a, int b)
{
	C++;
	if (a > b)
		return true;
	else
		return false;
};

void reverse(int* ar_1)
{
	for (int i = 0; i < n / 2; i++)
		swap(ar_1[i], ar_1[n - i - 1]);
}

void Shell(int ar_1[])
{
	long int start = GetTickCount();
	C = 0, M = 0;
	int d = n;
	d = d / 2;
	while (d > 0)
	{
		for (int i = 0; i < n - d; i++)
		{
			int j = i;
			while (j >= 0 && compare(ar_1[j], ar_1[j + d]))
			{
				swap(ar_1[j], ar_1[j + d]);
				j--;
				M++;
			}
		}
		d = d / 2;
	}
	long int end = GetTickCount();
	long int T = end - start;
	f = C + M;
	cout << "T(n)=" << T << "   fэ(n)=" << f << endl;
};

int main()
{
	setlocale(LC_ALL, "Rus");
	n = 10;
	int select;
	cout << "Тест-0 Шелла-1" << endl;
	cin >> select;
	cout << endl;
	if (select == 0)
	{
		test();
	}
	if (select == 1)
	{
		cout << endl << endl << "Сортировка Шелла: ";
		cout << endl;
		for (int i = 0; i < 5; i++)
		{
			n *= 10;
			int* ar_1 = new int[n];
			for (int i = 0; i < n; i++)
				ar_1[i] = rand();
			cout << n << " элементов:" << endl;
			cout << "Средний случай:" << endl;
			Shell(ar_1);
			fa = n * n;
			cout << "fa(n)=" << fa << "   fэ(n)/fa(n)=" << f / fa << endl;

			cout << "Наилучший случай:" << endl;
			Shell(ar_1);
			fa = n * log10(n) * log10(n);
			cout << "fa(n)=" << fa << "   fэ(n)/fa(n)=" << f / fa << endl;

			cout << "Наихудший случай:" << endl;
			reverse(ar_1);
			Shell(ar_1);
			fa = pow(n, 1.5);
			cout << "fa(n)=" << fa << "   fэ(n)/fa(n)=" << f / fa << endl;

			cout << endl;
			delete[] ar_1;
		}
	}

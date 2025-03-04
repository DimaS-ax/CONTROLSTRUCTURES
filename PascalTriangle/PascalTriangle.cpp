#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");

	int n;
	cout << "Введите количество строк: "; cin >> n;

	for (int i = 0; i < n; i++)
	{  // Выводим пробелы
		for (int c = 0; c < n - i - 1; c++)
		{
			cout << " ";
		}
		// Выводим элементы строки
		for (int j = 0; j <= i; j++)
		{
			int num = 1;
			for (int k = 1; k <= j; k++)
			{  // Формула для вычисления биномиальных коэффицентов
				num = num * (i - k + 1) / k;
			}
			cout << num << " ";
		}
		cout << endl;
	}

}
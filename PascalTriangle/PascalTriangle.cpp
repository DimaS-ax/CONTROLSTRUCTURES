#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");

	int n;
	cout << "������� ���������� �����: "; cin >> n;

	for (int i = 0; i < n; i++)
	{  // ������� �������
		for (int c = 0; c < n - i - 1; c++)
		{
			cout << " ";
		}
		// ������� �������� ������
		for (int j = 0; j <= i; j++)
		{
			int num = 1;
			for (int k = 1; k <= j; k++)
			{  // ������� ��� ���������� ������������ ������������
				num = num * (i - k + 1) / k;
			}
			cout << num << " ";
		}
		cout << endl;
	}

}
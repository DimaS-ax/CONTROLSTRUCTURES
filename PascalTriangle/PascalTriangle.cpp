#include<iostream>
using namespace std;
/*
  �������� ������� '������� ���������' 
  ������� ���� ������� ������� � �������� �� GitHub ��� ����������
https://github.com/DimaS-ax/CONTROLSTRUCTURES/tree/master/Pictures


������ �� ��� �� ����������� �������, ������� ����� � �����.cpp
https://github.com/DimaS-ax/CONTROLSTRUCTURES/tree/master/PascalTriangle

*/

void main()
{
	setlocale(LC_ALL, "ru");

	cout << "Pascal Triangle" << endl;


	int n;
	cout << "������� ���������� �����: "; cin >> n;

	for (int i = 0; i < n; i++)
	{  
		for (int c = 0; c < n - i - 1; c++)
		{
			cout << " ";
		}
		
		for (int j = 0; j <= i; j++)
		{
			int num = 1;
			for (int k = 1; k <= j; k++)
			{  
				num = num * (i - k + 1) / k; // ������� ��� ���������� ������������ ������������
			}
			cout << num << " ";
		}
		cout << endl;
	}

}
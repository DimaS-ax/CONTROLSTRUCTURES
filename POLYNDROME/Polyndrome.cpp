#include<iostream>
using namespace std;
// ��������� - ����� ������� � ������������ ���� ������ ���� �� ����
// �������� 121 _ ����������� _ 121 - ��� ���������.
void main()
{
	setlocale(LC_ALL, "ru");

	cout << "Palindrome" << endl;
	int number;  //�����, �������� � ����������
	int reverse = 0; // �����, ���������� � �������� �������
	cout << "������� �����: "; cin >> number;
	int buffer = number; // ����� �����, ��������� � ����������
	while (buffer)
	{
		reverse *= 10;
		reverse += buffer % 10; // �������� ������� ������ �����
		buffer /= 10; // ������� ������� ������
	}
	cout << number << endl;
	cout << reverse << endl;
	if (number == reverse)
	{
		cout << "���������" << endl;
	}
	else
	{
		cout << "������� �����" << endl;
	}

}
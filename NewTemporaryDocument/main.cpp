#include<iostream>
using namespace std;
// �������
/*�������� ����� "sizeof" ���������� ����� ������ ���� ����������
��������: cout<<sizeof(double) = 8 ����. (int) = 4 �����*/

void main()
{
	setlocale(LC_ALL, "ru");

	double arr[]{ 2,4,7,8,1 };

	int a = sizeof(arr);
	int b = sizeof(arr[0]);


	/*� ���������� -a- sizeof ���������� ���������� ������ � �������, �� 5
	 � ��������� -b- ���������� ����� ������ ���� ������ � �������
	 ���� � 'cout' �������� ������� �� ������� ����� ���������� ������� � ������� ������*/

	cout << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "______________________________" << endl;

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		cout << arr[i] << endl;

	}
	cout << "______________________________" << endl;

	cout << sizeof(double);


}
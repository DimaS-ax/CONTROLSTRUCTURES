#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define WHILE
//#define DO_WHILE

void main()
{
	setlocale(LC_ALL, "ru");

#ifdef WHILE // ���� 'While'
	cout << "���� 'While'" << endl;
	int a = 0;
	while (a < 10)
	{
		cout << a << "  ";
		a++;
	}
	cout << endl;


	cout << "===================================================" << endl;
	int b;
	cout << "������� ���������� ��������: "; cin >> b;
	while (--b)
	{
		cout << b << "  ";
		// b--;  //����� �������� ���...
	}
	cout << endl;
	cout << "===================================================" << endl;
#endif // WHILE

#ifdef DO_WHILE // ���� 'Do While'
	int i = 0;
	cout << "|  ������ ����� 'Do While'" << endl;
	do
	{
		cout << i << endl;
		i++;
	} while (i < 10);
	cout << i << " - ����� ����� 'Do While'" << endl;
#endif // DO_WHILE

}
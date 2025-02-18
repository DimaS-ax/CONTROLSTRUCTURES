#include<iostream>
using namespace std;

//#define NUMBER_DEGREE
//#define FACTORIAL
//#define ASCII
//#define PERFECT_NUMBER
//#define SIMPLE_NUMBERS
//#define NUMBER_OF_FIBONACCI_NUMBERS
//#define FIBONACCI_SERIES
//#define MULTIPLICATION_TABLE_PITHAGORAS
//#define CYCLE_FOR_FACTORIAL
//#define TABLE_ASCII


void main()
{
	setlocale(LC_ALL, "ru");

	//���� "FOR"

	//for (;;)    //    while (true)
	//{
	//	cout << "Hello FOR";
	//}

	for (int i = 0; i < 10; i++)
	{
		cout << "�������� � " << i << endl;
	}


#ifdef TABLE_ASCII
	for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0)cout << endl;
		cout << (char)i << " ";
	}
#endif // TABLE_ASCII


#ifdef CYCLE_FOR_FACTORIAL
	int n; //��������� ��������
	cout << "������ ���������� ��������  "; cin >> n;
	double f = 1;

	for (int i = 1; i <= n; i++)
	{
		cout << i << "! = ";
		f *= i; // Arithmetical overflow (�������������� ������������)
		cout << f << endl;
		// inf - Infinity (�������������)
	}
	cout << endl;
	/*��������� - ��� ������������ ���� ����������� ����� �� ���������
	 ��������: ��������� ����� 7 = 5040 ; 1 * 2 * 3 * 4 * 5 * 6 * 7 = 5040 */
#endif // CYCLE_FOR_FACTORIAL


#ifdef MULTIPLICATION_TABLE_PITHAGORAS
	cout << "\t\t\t������� ���������:" << endl;
	cout << "\n========================================================================" << endl;
	int res;
	for (int i = 1; i <= 9; i++)
	{
		cout << endl;
		for (int j = 1; j <= 9; j++)
		{
			res = i * j;
			cout << i << "*" << j << "=" << res << "\t";
		}
	}
	cout << "\n========================================================================" << endl;
	cout << endl << endl;


	cout << "\t\t\t������� ��������:" << endl;
	cout << "\t1\t2\t3\t4\t5\t6\t7\t8\t9  " << endl;
	cout << "   ________________________________________________________________________" << endl;
	for (int i = 1; i <= 9; i++)
	{

		cout << i << "|\t";
		for (int j = 1; j <= 9; j++)
		{

			cout << i * j << "\t";
		}
		cout << endl << "\n";
	}
	cout << "\n__________________________________________________________________________" << endl;
#endif // MULPIPLICATION_TABLE_PITHAGORAS

#ifdef FIBONACCI_SERIES
	// ����� ���� ����� ��������� �� ������������� �������...
	int oneNum = 1;
	int twoNum = 0;
	int result = 0;
	int number;
	cout << "�� ������ ������� ������� ��� ���������: "; cin >> number;
	while (number >= result)
	{
		result = oneNum + twoNum;
		cout << result << " ";
		oneNum = twoNum;
		twoNum = result;
	}
#endif // FIBONACCI_SERIES

#ifdef NUMBER_OF_FIBONACCI_NUMBERS
	// ����� �������� ���������� ����� ���������...
	int oneNum = 1;
	int twoNum = 0;
	int result = 0;
	int number = 0;
	int count;
	cout << "������� ����� ��������� ��������: "; cin >> count;
	while (number < count)
	{
		result = oneNum + twoNum;
		cout << result << " ";
		oneNum = twoNum;
		twoNum = result;
		number++;
	}
#endif // NUMBER_OF_FIBONACCI_NUMBERS

#ifdef NUMBER_DEGREE
	int number, degree;
	int result = 1.0;
	cout << "������� �����: " << endl;
	cin >> number;
	cout << "������� �������: " << endl;
	cin >> degree;
	for (int i = 0; i < degree; i++)
	{
		result *= number;
	}
	cout << "����� " << number << " � ������� " << degree << " = " << result << endl;
	/* ���������� ����:
	 ����������� � ������������ ��� �������� 'number', 'degree', ���������� 'result' ��������������
	 � 1.0,  � ������� ����� 'for' �������� 'number' �������� ������� ���, ������� ��� �������
	  � ���������� 'degree' ������: ����� 2 � ������� 10 ����� 1024 (2*2*2*2....= 1024) � ��� 10 ���. */
#endif // NUMBER_DEGREE

#ifdef FACTORIAL
	int num;
	int fact = 1;

	cout << "������� �����: " << endl;
	cin >> num;

	for (int i = 1; i <= num; ++i)
	{
		fact *= i;
	}
	cout << "��������� ����� " << num << " = " << fact << endl;
	/* ���������� 'fact' ���������� ����� ������, ������ ��� ��������� ������ ����� ����� � �������
	 ���� 'for' ���������� � ������� � ������������ �� �������� ���������� 'num'
	 �� ������ �������� ��������� 'fact' ������������� �������� ������������ ������� �������� �����...
	 ��������: ��������� ����� 7 ����� 5040 (1*2*3*4*5*6*7 = 5040) */
#endif // FACTORIAL

#ifdef ASCII
	int count = 0; //������� ��� ������������ �������� � ������

	for (int i = 0; i < 255; i++)
	{
		if (count % 16 == 0 && count != 0) // �������� ������� � ������� (� ������ ������ 16 ������� � ������� �� ����� �������)
		{ // ����� ������� ��������������
			cout << endl;
		}
		cout << i << " " << char(i) << ";  ";
		count++; // � ������ �������� ������� ������������
	}
	cout << endl << endl;
#endif // ASCII

#ifdef PERFECT_NUMBER
	/*����� � ������� ��� ����������� ����� �� ���������� ������� */
	int limit;
	cout << "������� �� ������ ������� ��������� ����������� �����: ";
	cin >> limit;

	cout << "��� ����������� ����� �� " << limit << ": ";

	for (int i = 1; i <= limit; i++) // ������ ���� ���������� ��� ����� ��
		// ����������
	{
		int SUMIJ = 0;

		for (int j = 1; j < i; j++) // ������ ���� ��������� ����� ���� ���������
			// �������� �����
		{
			if (i % j == 0)
			{
				SUMIJ += j;
			}
		}
		// ���� ����� ���� ��������� ����� ������ ����� ��� ���������� � �������
		// ��� �����������
		if (SUMIJ == i)
		{
			cout << i << " ";
		}
	}
	cout << endl;
#endif // PERFECT_NUMBER

#ifdef SIMPLE_NUMBERS
	int NUM;
	cout << "�� ������ ������� ������ ������� �����?  "; cin >> NUM;
	cout << "������� ����� �� " << NUM << ": \n";

	for (int i = 2; i <= NUM; i++)
	{
		bool Flag = true;/* ���������� � ������� �������� ��� �����������
							������� ����� */
		for (int j = 2; j * j <= i; j++)
		{
			if (i % j == 0) // �������� ������� �� ����� ��� ������� �� 2 ��
				//����������� ���� ����� �����
			{               // ���� ������� �������� ����� �� �������� �������.
				Flag = false;// ���������� 'Flag' �� ��������
			}
		}
		if (Flag)//���� ����� �������� ����� �������� �������, ��� ����������
		{
			cout << i << " ";
		}
	}
#endif // SIMPLE_NUMBERS

}
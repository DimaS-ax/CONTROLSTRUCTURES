#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define CALC_IF_ELSE
//#define CALC_SWITCH
//#define CALCULATOR

void main()
{
	setlocale(LC_ALL, "rus");

	double a, b, s;
	char c;
	cout << "Введите арифметическую операцию: "; cin >> a >> c >> b;

#ifdef CALC_IF_ELSE
	/*Калькулятор на примере управляющей структуры "IF_ELSE"*/

	if (c == '+')
	{
		cout << a << " + " << b << " = " << a + b << endl;
	}
	else if (c == '-')
	{
		cout << a << " - " << b << " = " << a - b << endl;
	}
	else if (c == '*')
	{
		cout << a << " * " << b << " = " << a * b << endl;
	}
	else if (c == '/')
	{
		cout << a << " / " << b << " = " << a / b << endl;
	}
	else
	{
		cout << "Error^: No operation! " << endl;
	}
#endif // CALC_IF_ELSE

#ifdef CALC_SWITCH
	/*Калькулятор на управляющей структуре "SWITCH"*/
	switch (c)
	{
	case'+':
		cout << a << " + " << b << " = " << a + b << endl;
		break;
	case'-':
		cout << a << " - " << b << " = " << a - b << endl;
		break;
	case'*':
		cout << a << " * " << b << " = " << a * b << endl;
		break;
	case'/':
		cout << a << " / " << b << " = " << a / b << endl;
		break;
	default:
		cout << "Error^: No Operation!!! ";
		break;
	}
#endif // CALC_SWITCH

#ifdef CALCULATOR
	/* Калькулятор с возможностью продолжения выражения без выхода из 
	программы */
	do
	{
		if (c == '/' && b == 0)
		{
			cout << "Error^: No operation! ";
		}
		switch (c)
		{
		case'+':
			s = a + b;
			break;
		case'-':
			s = a - b;
			break;
		case'*':
			s = a * b;
			break;
		case'/':
			s = a / b;
			break;
		default:
			cout << "Error^: No Opreation! " << endl;
			break;
		}
		cout << "Результат выражения: " << s;
		if (a = s)
		{
			cin >> c >> b;
		}

	} while (true);
#endif // CALCULATOR


}
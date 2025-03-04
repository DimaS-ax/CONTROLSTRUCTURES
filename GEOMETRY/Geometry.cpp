#include<iostream>
using namespace std;

//#define SQUARE
//#define CLASS_TRIANGLE_1
//#define CLASS_TRIANGLE_2
//#define STARS
//#define CHESS    // Перед включением выключить "setlocale" на русском
//#define PLUS_AND_MINUS
//#define FULL_RHOMBUS
//#define EMPTY_RHOMBUS
//#define TRIANGLE_1
//#define TRIANGLE_2
//#define TRIANGLE_3
//#define TRIANGLE_4
//#define RECTANGLE
//#define NEXT_RHOMBUS
//#define XXPLUS_AND_MINUS


void main()
{
	setlocale(LC_ALL, "ru");
	cout << "GEOMETRY" << endl;





#ifdef XXPLUS_AND_MINUS
	int n;
	n = 5;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			/*if ((i + j) % 2 == 0)cout << "+ "; else cout << "- ";*/

			/*if (i % 2 == j % 2)cout << "+ "; else cout << "- ";*/

			/*i % 2 == j % 2 ? cout << "+ " : cout << "- ";*/

			/*i + j % 2 ? cout << "+ " : cout << "- ";*/

			cout << (i % 2 == j % 2 ? "+ " : "- ");

		}
		cout << endl;
	}
#endif // XXPLUS_AND_MINUS


#ifdef NEXT_RHOMBUS
	int n;
	n = 5;

	for (int i = 0; i < n * 2; i++)
	{
		for (int j = 0; j < n * 2; j++)
		{
			//cout << "* ";
			if (i == (j + n) || j == (i + n)) cout << "\\";

			/*else if (i == (n - j - 1) || i == (n * 3 - j - 1))cout << "/";*/
			else if (i == (n - j - 1) || (i - n == (n * 2 - j - 1)))cout << "/";
			
			else cout << " ";

		}
		cout << endl;
	}
#endif // NEXT_RHOMBUS


#ifdef RECTANGLE
	/*

* * * * *
* * * * *
* * * * *
* * * * *
* * * * *

*/

Прямоугольник:
	for (int i = 0; i < 5; i++)
	{
		cout << endl;
		for (int i = 0; i < 5; i++)
		{
			cout << "* ";
		}
	}
#endif // RECTANGLE


#ifdef TRIANGLE_4
	/*

*
* *
* * *
* * * *
* * * * *

*/

	for (int i = 0; i <= 5; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	cout << endl;
#endif // TRIANGLE_4


#ifdef TRIANGLE_3
	/*

* * * * *
* * * *
* * *
* *
*

*/

	for (int i = 0; i <= 5; i++)
	{
		cout << " ";
		for (int k = i; k < 5; k++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	cout << endl;
#endif // TRIANGLE_3


#ifdef TRIANGLE_2
	/*
*
* *
* * *
* * * *
* * * * *
*/
	for (int i = 0; i <= 5; i++)
	{
		cout << " ";
		for (int k = i; k < 5; k++)
		{
			cout << "  ";
		}

		for (int j = 0; j < i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}

	cout << endl << endl;
#endif // TRIANGLE_2


#ifdef TRIANGLE_1
	/*

* * * * *
  * * * *
	* * *
	  * *
		*
*/
	for (int i = 0; i < 5; i++)
	{
		for (int k = 0; k < i; k++)
		{
			cout << "  ";
		}
		for (int j = i; j < 5; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIANGLE_1


#ifdef EMPTY_RHOMBUS
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5 - i - 1; j++)
			cout << " ";

		for (int k = 0; k <= i * 2; k++)
		{
			if (k == 0 || k == i * 2)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}

	for (int i = 5 - 2; i >= 0; i--)
	{
		for (int j = 0; j < 5 - i - 1; j++)
			cout << " ";

		for (int k = 0; k <= i * 2; k++)
		{
			if (k == 0 || k == i * 2)
			{
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}
#endif // EMPTY_RHOMBUS


#ifdef FULL_RHOMBUS
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5 - i - 1; j++)
			cout << " ";
		for (int k = 0; k <= i * 2; k++)
			cout << "*";
		cout << endl;
	}

	for (int i = 5 - 2; i >= 0; i--) {
		for (int j = 0; j < 5 - i - 1; j++)
			cout << " ";
		for (int k = 0; k <= i * 2; k++)
			cout << "*";
		cout << endl;
	}
#endif // FULL_RHOMBUS


#ifdef PLUS_AND_MINUS
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if ((j + i) % 2 == 0)
			{
				cout << " + ";
			}
			else
			{
				cout << " - ";
			}

		}
		cout << endl;
	}
#endif // PLUS_AND_MINUS


#ifdef CHESS  // Перед запуском "Chess" нужно выключить "SETLOCALE" на русском
	cout << " ______________\n" << endl;
	for (int j = 0; j < 8; j++)
	{
		cout << "| ";
		for (int i = 0; i < 8; i++)
		{

			if ((i + j) % 2 == 0)
			{
				cout << (char)219;

			}
			else
			{
				cout << "  ";
			}

		}
		cout << " |";
		cout << endl;
	}
	cout << " ______________" << endl;
#endif // CHESS


#ifdef STARS
	for (int i = 0; i < 25; i++)
	{
		for (int j = 0; j < 25; j++)
		{
			/*if ((i + j) % 2 == 0)*/
			if ((i / 5 + j / 5) & 1)

				cout << "* ";

			else

				cout << "  ";

		}
		cout << endl;
	}

	/*if ((i / 5 + j / 5) & 1)*/
#endif // STARS


#ifdef CLASS_TRIANGLE_2
	int n;
	cout << "Ввидите количество звездочек: "; cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << " ";
		}
		for (int j = i; j < n; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	int m;
	cout << "Введите количество звездочек: "; cin >> m;

	for (int i = 0; i < m; i++) {

		for (int j = m - 1; j > i; j--) {
			cout << " ";
		}

		for (int j = 0; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}
#endif // CLASS_TRIANGLE_2


#ifdef CLASS_TRIANGLE_1
	int b;
	cout << "Ввидите количество звездочек: "; cin >> b;

	for (int i = 1; i <= b; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	int s;
	cout << "Ввидите количество звездочек: "; cin >> s;

	for (int i = s; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
#endif // CLASS_TRIANGLE_1


#ifdef SQUARE
	int heigth, width;

	cout << "Ввидите высоту прямоугольника: "; cin >> heigth;
	cout << "Ввидите ширину прямоугольника: "; cin >> width;
	cout << endl;

	for (int j = 0; j < heigth; j++)
	{
		for (int i = 0; i < width; i++)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;
#endif // SQUARE

}
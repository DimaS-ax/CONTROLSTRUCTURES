﻿#include<iostream>
using namespace std;
#define UPPER_LEFT_ANGLE   (char)218
#define UPPER_PIGHT_ANGLE  (char)191
#define LOWER_LEFT_ANGLE   (char)192
#define LOWER_PIGHT_ANGLE  (char)217
#define HORIZONTAL_LINE    (char)196
#define VERTICAL_LINE      (char)179
#define WHITE_BOX          "\xDB\xDB"
//#define WHITE_BOX          (char)219
#define BLACK_BOX          "  "
//#define BLACK_BOX          (char)32
/*
	Escape-последовательность '\xHH' позволяет прямо в строке задать ASCII-код символа
	в Шестнадцатеричной системе счисления.

*/


//#define ASCII


void main()
{

#ifdef ASCII
	for (int i = 176; i < 224; i++)
	{
		/*if (i % 16 == 0)cout << endl;
		cout << (char)i << " ";*/
		cout << i << "\t" << (char)i << endl;
	}
#endif // ASCI

	setlocale(LC_ALL, "ru");

	int n;
	cout << "Введите размер доски: "; cin >> n;
	n++;
	setlocale(LC_ALL, "C");//Устонавливает кодировку по умолчанию

	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if (i == 0 && j == 0)cout << UPPER_LEFT_ANGLE;
			else if (i == 0 && j == n)cout << UPPER_PIGHT_ANGLE;
			else if (i == n && j == 0)cout << LOWER_LEFT_ANGLE;
			else if (i == n && j == n)cout << LOWER_PIGHT_ANGLE;
			else if (i == 0 || i == n)cout << HORIZONTAL_LINE << HORIZONTAL_LINE;
			else if (j == 0 || j == n)cout << VERTICAL_LINE;
			else cout << (i % 2 == j % 2 ? WHITE_BOX : BLACK_BOX);
		}
		cout << endl;
	}


}
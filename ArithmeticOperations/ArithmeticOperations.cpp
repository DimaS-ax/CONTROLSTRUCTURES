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

	//Цикл "FOR"

	//for (;;)    //    while (true)
	//{
	//	cout << "Hello FOR";
	//}

	for (int i = 0; i < 10; i++)
	{
		cout << "Итерация № " << i << endl;
	}


#ifdef TABLE_ASCII
	for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0)cout << endl;
		cout << (char)i << " ";
	}
#endif // TABLE_ASCII


#ifdef CYCLE_FOR_FACTORIAL
	int n; //Количесво итераций
	cout << "Ведите количество итераций  "; cin >> n;
	double f = 1;

	for (int i = 1; i <= n; i++)
	{
		cout << i << "! = ";
		f *= i; // Arithmetical overflow (Арифметическое переполнение)
		cout << f << endl;
		// inf - Infinity (Бесконечность)
	}
	cout << endl;
	/*Факториал - это произведение всех натуральных чисел до заданного
	 Например: Факториал числа 7 = 5040 ; 1 * 2 * 3 * 4 * 5 * 6 * 7 = 5040 */
#endif // CYCLE_FOR_FACTORIAL


#ifdef MULTIPLICATION_TABLE_PITHAGORAS
	cout << "\t\t\tТаблица умножения:" << endl;
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


	cout << "\t\t\tТаблица Пифагора:" << endl;
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
	// Вывод ряда чисел Фибоначчи до определенного предела...
	int oneNum = 1;
	int twoNum = 0;
	int result = 0;
	int number;
	cout << "До какого предела считать ряд Фибоначчи: "; cin >> number;
	while (number >= result)
	{
		result = oneNum + twoNum;
		cout << result << " ";
		oneNum = twoNum;
		twoNum = result;
	}
#endif // FIBONACCI_SERIES

#ifdef NUMBER_OF_FIBONACCI_NUMBERS
	// Вывод заданное количество чисел Фибоначчи...
	int oneNum = 1;
	int twoNum = 0;
	int result = 0;
	int number = 0;
	int count;
	cout << "Сколько чисел Фибоначчи показать: "; cin >> count;
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
	cout << "Введите число: " << endl;
	cin >> number;
	cout << "Введите степень: " << endl;
	cin >> degree;
	for (int i = 0; i < degree; i++)
	{
		result *= number;
	}
	cout << "Число " << number << " в степени " << degree << " = " << result << endl;
	/* Обьяснение кода:
	 Запрашиваем у пользователя два значения 'number', 'degree', переменную 'result' инициализируем
	 в 1.0,  С помощью цикла 'for' значение 'number' умножаем столько раз, сколько раз указали
	  в переменной 'degree' Пример: число 2 в степени 10 ровно 1024 (2*2*2*2....= 1024) и так 10 раз. */
#endif // NUMBER_DEGREE

#ifdef FACTORIAL
	int num;
	int fact = 1;

	cout << "Введите число: " << endl;
	cin >> num;

	for (int i = 1; i <= num; ++i)
	{
		fact *= i;
	}
	cout << "Факториал числа " << num << " = " << fact << endl;
	/* Переменная 'fact' изначально равна одному, потому что фактариал любого числа равно с единици
	 Цикл 'for' начинается с единици и продолжается до значение переменной 'num'
	 на каждой итерации пременной 'fact' присваеваится значение произведения текущей итерации цикла...
	 Например: факториал числа 7 равен 5040 (1*2*3*4*5*6*7 = 5040) */
#endif // FACTORIAL

#ifdef ASCII
	int count = 0; //Счетчик для отслеживания символов в строке

	for (int i = 0; i < 255; i++)
	{
		if (count % 16 == 0 && count != 0) // Счистаем символы в строчке (в данном случае 16 сиволов и переход на новую строчку)
		{ // Здесь счетчик обрабатывается
			cout << endl;
		}
		cout << i << " " << char(i) << ";  ";
		count++; // С каждым символом счетчик прибавляется
	}
	cout << endl << endl;
#endif // ASCII

#ifdef PERFECT_NUMBER
	/*Вывод в консоль ряд совершенных чисел до указанного предела */
	int limit;
	cout << "Введите до какого предела вычислять совершенные числа: ";
	cin >> limit;

	cout << "Ряд совершенных чисел до " << limit << ": ";

	for (int i = 1; i <= limit; i++) // Первый цикл перебирает все числа до
		// введенного
	{
		int SUMIJ = 0;

		for (int j = 1; j < i; j++) // Второй цикл вычесляет сумму всех делителей
			// текущего числа
		{
			if (i % j == 0)
			{
				SUMIJ += j;
			}
		}
		// Если сумма всех делителей равна самому числу оно выводиться в консоль
		// как совершенное
		if (SUMIJ == i)
		{
			cout << i << " ";
		}
	}
	cout << endl;
#endif // PERFECT_NUMBER

#ifdef SIMPLE_NUMBERS
	int NUM;
	cout << "До какого предела искать простые числа?  "; cin >> NUM;
	cout << "Простые числа до " << NUM << ": \n";

	for (int i = 2; i <= NUM; i++)
	{
		bool Flag = true;/* Переменная с булевым значение для ослеживания
							простых чисел */
		for (int j = 2; j * j <= i; j++)
		{
			if (i % j == 0) // Проверка делится ли число без остатка от 2 до
				//квадратного коря этого числа
			{               // Если деление возможно число не является простым.
				Flag = false;// Переменная 'Flag' не истинный
			}
		}
		if (Flag)//Если после проверки число осталось простым, оно выводиться
		{
			cout << i << " ";
		}
	}
#endif // SIMPLE_NUMBERS

}
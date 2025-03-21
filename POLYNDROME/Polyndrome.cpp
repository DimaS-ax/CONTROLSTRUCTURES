#include<iostream>
using namespace std;
// Полиндром - число которое в перевернутом виде похоже само на себя
// Например 121 _ перевернуть _ 121 - это полиндром.
void main()
{
	setlocale(LC_ALL, "ru");

	cout << "Palindrome" << endl;
	int number;  //Число, вводимое с клавиатуры
	int reverse = 0; // Число, записанное в обратном порядке
	cout << "Введите число: "; cin >> number;
	int buffer = number; // Копия числа, введенная с клавиатуры
	while (buffer)
	{
		reverse *= 10;
		reverse += buffer % 10; // Получаем младший разряд числа
		buffer /= 10; // Убираем младший разряд
	}
	cout << number << endl;
	cout << reverse << endl;
	if (number == reverse)
	{
		cout << "Палиндром" << endl;
	}
	else
	{
		cout << "Обычное число" << endl;
	}

}
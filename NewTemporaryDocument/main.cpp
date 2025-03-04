#include<iostream>
using namespace std;
// Массивы
/*Ключевое слово "sizeof" показывает обьем памяти типа переменных
напремер: cout<<sizeof(double) = 8 байт. (int) = 4 байта*/

void main()
{
	setlocale(LC_ALL, "ru");

	double arr[]{ 2,4,7,8,1 };

	int a = sizeof(arr);
	int b = sizeof(arr[0]);


	/*в переменной -a- sizeof показывает КОЛИЧЕСТВО данных в массиве, их 5
	 в пременной -b- показывает обьем памяти типа данных в массиве
	 ниже в 'cout' показана формула по которой можно определить сколько в массиве данных*/

	cout << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "______________________________" << endl;

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		cout << arr[i] << endl;

	}
	cout << "______________________________" << endl;

	cout << sizeof(double);


}
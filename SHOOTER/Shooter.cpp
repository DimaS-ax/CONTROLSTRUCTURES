#include<iostream>
#include<conio.h>
using namespace std;
using std::sin;
using std::cout;
using std::endl;
#define Enter 13
#define Escape 27
#define UpArrow 72
#define DownArrow 80
#define LeftArrow 75
#define RightArrow 77

//#define IF_ELSE
//#define SWITCH

void main()
{
	setlocale(LC_ALL, "ru");
	cout << "Shooter" << endl;

#ifdef IF_ELSE
	char key; // Запись кода клавиши в переменную
	do
	{
		key = _getch(); //Функция "_gettch()" ожидает нажатия клавиши и возвращает
		//ASCII код нажатой клавиши.
//(int)key это явное преобразование 'key' в числовой код 'int'
//по итогу получим ASCII код.
/*cout << (int)key << "\t" << key << endl;*/

		if (key == 'w' || key == 'W' || key == UpArrow)cout << "Вперед" << endl;
		else if (key == 's' || key == 'S' || key == DownArrow)cout << "Назад" << endl;
		else if (key == 'a' || key == 'A' || key == LeftArrow)cout << "Влево" << endl;
		else if (key == 'd' || key == 'D' || key == RightArrow)cout << "Вправо" << endl;
		else if (key == ' ')cout << "Прыжок" << endl;
		else if (key == Enter)cout << "Огонь" << endl;
		else if (key != -32 && key != Escape) cout << "Error" << endl;

	} while (key != Escape);
	/* (type)value; C-Like notation, С_подобная форма записи.
	   type(value); Functional notation, Функциональная фома записи. */
#endif // IF_ELSE

#ifdef SWITCH
	char key;

	do
	{
		key = _getch();
		/*cout << (int)key << "\t" << key << endl;*/
		switch (key)
		{
		case UpArrow:
		case 'W':
		case 'w': cout << "Вперед" << endl; break;
		case DownArrow:
		case 'S':
		case 's': cout << "Назад" << endl; break;
		case LeftArrow:
		case 'A':
		case 'a': cout << "Влево" << endl; break;
		case RightArrow:
		case 'D':
		case 'd': cout << "Вправо" << endl; break;
		case ' ': cout << "Прыжок" << endl; break;
		case Enter: cout << "Огонь" << endl; break;
		case -32:break;
		case Escape: cout << "Выход" << endl;
		default:
			cout << "Error!" << endl;
			break;
		}
	} while (key != Escape);
#endif // SWITCH


}
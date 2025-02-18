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
	char key; // ������ ���� ������� � ����������
	do
	{
		key = _getch(); //������� "_gettch()" ������� ������� ������� � ����������
		//ASCII ��� ������� �������.
//(int)key ��� ����� �������������� 'key' � �������� ��� 'int'
//�� ����� ������� ASCII ���.
/*cout << (int)key << "\t" << key << endl;*/

		if (key == 'w' || key == 'W' || key == UpArrow)cout << "������" << endl;
		else if (key == 's' || key == 'S' || key == DownArrow)cout << "�����" << endl;
		else if (key == 'a' || key == 'A' || key == LeftArrow)cout << "�����" << endl;
		else if (key == 'd' || key == 'D' || key == RightArrow)cout << "������" << endl;
		else if (key == ' ')cout << "������" << endl;
		else if (key == Enter)cout << "�����" << endl;
		else if (key != -32 && key != Escape) cout << "Error" << endl;

	} while (key != Escape);
	/* (type)value; C-Like notation, �_�������� ����� ������.
	   type(value); Functional notation, �������������� ���� ������. */
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
		case 'w': cout << "������" << endl; break;
		case DownArrow:
		case 'S':
		case 's': cout << "�����" << endl; break;
		case LeftArrow:
		case 'A':
		case 'a': cout << "�����" << endl; break;
		case RightArrow:
		case 'D':
		case 'd': cout << "������" << endl; break;
		case ' ': cout << "������" << endl; break;
		case Enter: cout << "�����" << endl; break;
		case -32:break;
		case Escape: cout << "�����" << endl;
		default:
			cout << "Error!" << endl;
			break;
		}
	} while (key != Escape);
#endif // SWITCH


}
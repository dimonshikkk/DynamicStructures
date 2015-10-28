#include "stdafx.h"
#include "stack.h"
#include <iostream>
#include <conio.h>


using namespace std;




int _tmain(int argc, _TCHAR* argv[])
{
	int a, mn;
	node *top = NULL;
	setlocale(LC_ALL, "Russian");


	do
	{
		cout << "Выберите пунк из меню:" << endl;
		cout << "0)Выход" << endl;
		cout << "1)Добавить элемент в стек" << endl;
		cout << "2)Удалить элемент из стека" << endl;
		cout << "3)Печать стека" << endl;
		cin >> mn;
		switch (mn)

		{

		case 1:

		{
			cout << "Введите число в стек:" << endl;
			cin >> a;
			if (isEmpty(top) == 0)
			{
				top = first(a);
				system("cls");
			}
			else
			{
				push(&top, a);
				system("cls");
			}
			break;

		}

		case 2:

		{
			if (isEmpty(top) == 0)
			{
				system("cls");
				cout << "Элементов в стеке нет" << endl;
				cout << endl;
				cout << endl;
				cout << endl;
			}
			else
			{
				pop(&top);
				system("cls");
				cout << endl;
				cout << endl;
				cout << endl;
			}
			break;

		}

		case 3:

		{
			if (isEmpty(top) == 0)
			{
				system("cls");
				cout << "Элементов в стеке нет" << endl;
				cout << endl;
				cout << endl;
				cout << endl;
			}
			else
			{
				system("cls");
				print(&top);
				cout << endl;
				cout << endl;
				cout << endl;
			}
			break;

		}

		}
		if (mn<0 || mn>3)
			system("cls");
	} while (mn != 0);
	_getch();
	return 0;
}

#include "stdafx.h"
#include "header.h"
#include <iostream>
#include <conio.h>


using namespace std;




int _tmain(int argc, _TCHAR* argv[])
{
	int a;
	bool fl = 1;
	node *top = NULL;

	setlocale(LC_ALL, "Russian");

	cout << "Введите число в стек,для прекращения ввода введите -1"<<endl;
	do
	{
		cin >> a;
		if (a!=-1)
		push(&top, a);
	} while (a != -1);



	do
	{
		cout << "Для удаление элемента нажмите 0,иначе введите 1"<<endl;
		cin >> fl;
		if (fl == 0)
			pop(&top);
	} while (fl == 0);
	print(&top);

	_getch();
	return 0;
}

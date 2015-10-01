#include "stdafx.h"
#include "queue.h"
#include <iostream>
#include <conio.h>


using namespace std;




int _tmain(int argc, _TCHAR* argv[])
{
	int a;
	bool fl = 1;
	node *pbeg = NULL;
	node *pend = NULL;
	setlocale(LC_ALL, "Russian");

	cout << "Введите число в стек,для прекращения ввода введите -1" << endl;
	cin >> a;
	pbeg = pend = first(a);
	do
	{
		cin >> a;
		if (a != -1)
			add(&pend, a);
	} while (a != -1);



	do
	{
		cout << "Для удаление элемента нажмите 0,иначе введите 1" << endl;
		cin >> fl;
		if (fl == 0)
			del(&pbeg);
	} while (fl == 0);
	cout << endl;
	cout << endl;
	print(pbeg);

	_getch();
	return 0;
}

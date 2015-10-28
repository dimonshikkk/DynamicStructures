#include "stdafx.h"
#include "stack.h"
#include <iostream>




/*
	BRIEF: функция втсавки первого элемента в стек
	IN: Число,которое станет первым элементом
	OUT: Адресс первого элемента структуры
*/
node* first(int d)
{
	node *top=new node;
	top->d=d;
	top->p=0;
	return top;
}



/*
	BRIEF: Функция вставки элемента в стек
	IN: Адрес вершины,число
	OUT: ---
*/
void push(node **top, int d)
{
	node *pv = new node;
	pv->d = d;
	pv->p = *top;
	*top = pv;
}



/*
	BRIEF: Функция удаления элемента из стека
	IN: Адрес вершины
	OUT: ---
*/
void pop(node **top)
{
	node *pv = *top;
	*top = (*top)->p;
	delete pv;
}



/*
	BRIEF: Функция печати стека
	IN: Адрес вершины стека
	OUT: Элементы стека на экран
*/
void print(node *top)
{
	node *pv = top;
	while (pv != NULL) // Если адрес вершины не указывает на 0(т.е. есть еще элементы)
	{
		cout << pv->d << endl;
		cout << " ";
		pv = pv->p;
	}
}



/*
	BRIEF: Функция проверки стека на пустоту
	IN: Адрес вершины стека
	OUT: 0,если стек пуст,в ином случае 1
*/
bool isEmpty(node *top)
{
	if (top == NULL)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

#include "stdafx.h"
#include "queue.h"
#include <iostream>



/*
	BRIEF: Функция вставки первого элемента в очередь
	IN: Число,которое будет элементом в очереди
	OUT: Адрес первого элемента структуры
*/
node *first(int d)
{
	node *pv = new node;
	pv->d = d;
	pv->p = NULL;
	return pv;
}


/*
	BRIEF: Функция добавление элемента в очередь
	IN: Адрес вершины,число,котоое вставят в очередь
	OUT: ---
*/
void add(node **pend, int d)
{
	node *pv = new node;
	pv->d = d;
	pv->p = NULL;
	(*pend)->p = pv;
	*pend = pv;
}



/*
	BRIEF: Функция удаления элемента из очереди
	IN: Адрес вершины
	OUT: ---
*/
void del(node **pbeg)
{
	node *pv = *pbeg;
	*pbeg = (*pbeg)->p;
	delete pv;
}



/*
	BRIEF: Функция печати очереди
	IN: Адрес вершины
	OUT: Элементы очереди на экран
*/
void print(node *pbeg)
{
	node *pv = pbeg;
	while (pv != NULL)
	{
		cout << pv->d;
		cout << " ";
		pv = pv->p;
	}
}



/*
	BRIEF: Функция проверку на пустоту
	IN: Адрес вершины 
	OUT: 0,если элементов в очереди нет,1 в ином случае
*/
bool isEmpty(node *pbeg)
{
	if (pbeg == NULL)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

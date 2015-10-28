#include "stdafx.h"
#include "list.h"
#include <iostream>



/*
	BRIEF: Функция вставки первого элемента в список
	IN: Число,которое будет элементом в списке
	OUT: Адрес первого элемента структуры
*/
node *first(int d)
{
	node *pv = new node;
	pv->d = d;
	pv->next = NULL;
	return pv;
}



/*
	BRIEF: Функция добавление элемента в список
	IN: Адрес вершины,число,котоое вставят в список
	OUT: ---
*/
void add(node **pend, int d)
{
	node *pv = new node;
	pv->d = d;
	pv->next = NULL;
	(*pend)->next = pv;
	*pend = pv;
}




/*
	BRIEF: Функция удаления элемента из списка
	IN: Адрес вершины
	OUT: ---
*/
int del(node **pbeg)
{
	node *pv = *pbeg;
	*pbeg = (*pbeg)->next;
	delete pv;
}



/*
	BRIEF: Функция печати списка
	IN: Адрес вершины
	OUT: Элементы списка на экран
*/
void print(node *pbeg)
{
	node *pv = pbeg;
	while (pv != NULL)
	{
		cout << pv->d;
		cout << " ";
		pv = pv->next;
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



/*
	BRIEF: Функция нахождения элемента
	IN: Адрес вершины,число для поиска
	OUT: Адрес элемента
*/
node* find(node *const pbeg, int d)
{
	node *pv = pbeg;
	while (pv)  //ищем элемент пока они не закончатся
	{
		if (pv->d == d)  //если нашли элемент
		{
			break;
		}
		pv = pv->next;
	}
	return pv;
}



/*
	BRIEF: Функция удаления элемента на ключу
	IN: Адрес вершиныю,ключ
	OUT: true,если удалили элемент,false,в ином случае
*/
bool del_key(node **pbeg, int key)
{
	node *pkey = find(*pbeg, key);

	if (pkey !=NULL) //Существует ключ в списке
	{
		if (pkey == *pbeg) //Ключ равен первому элементу
			*pbeg = (*pbeg)->next; //двигаем начало на второй элемент
		else
		{
			node*p = *pbeg;
			while (p->next != pkey) // находим адрес ключа
				p = p->next;
			p->next = pkey->next; // связываем два соседних элемента ключа
		}
		delete pkey;
		return true;
	}
	return false;
}




/*
	BRIEF: Функция вставки элемента после ключа
	IN: Адрес вершины,ключ,число,которое вставится после ключа
	OUT: ---
*/
void insert_after(node*const pbeg, int key, int d)
{
	node*pkey=NULL;

	if ((pkey = find(pbeg, key))!=NULL) //Если существует ключ в списке
	{
		node *pv = new node;
		pv->d = d;
		pv->next = pkey->next;
		pkey->next = pv;
	}
}



/*
	BRIEF: Функция вставки элемента до ключа
	IN: Адрес вершины,ключ,элемент,который вставится до ключа
	OUT: ---
*/
void insert_before(node**pbeg, int key, int d)
{
	node*pkey = NULL; 
	if ((pkey = find(*pbeg, key))!=NULL)
	{
		node*pv = new node;
		pv->d = d;
		if (pkey == *pbeg) //Ключ находится вначале
		{
			pv->next = *pbeg;
			*pbeg = pv;

		}
		else
		{       //Ключ находится не в начале
			pv->next = pkey;
			node*p = *pbeg;
			while (p->next != pkey)
				p = p->next;
			p->next = pv;
		}
	}
}



/*
	BRIEF: Функция сортировки списка
	IN: Адрес вершины
	OUT: ---
*/
void sort(node *pbeg)
{
	node *p, *pv;
	bool f = 1;
	while (f)
	{
		f = 0;
		p = pbeg;
		pv = p->next;
		while (pv)
		{
			if (pv->d < p->d) // Если они не упорядочены
			{
				int t = p->d; // Меняем
				p->d = pv->d; // Элементы
				pv->d = t; // Местами
				f = 1;
			}
			p = pv; // Переходим к следующему элементу
			pv = pv->next; // Переходим к следующему элементу
		}
	}
}


#include "stdafx.h"
#include "header.h"
#include <iostream>
using namespace std;


void push(node **top, int d)
{
	node *q = new node;
	
	q->val = d; //(*q).val
	q->prev = *top;

	*top = q;
}


int pop(node **top)
{
	int temp = (**top).val;
	node *q = *top; // дубликат структуры
	*top = (**top).prev; // определение новой вершины
	delete q; //освобождение памяти
	return temp; // возвращение информационного поля
}


void print(node **top)
{
	while (*top)
	cout << pop(top);
}


void print1(node *top)
{
	node *t;
	t = top;
	while (t)
	{
		cout << t->val << endl;
		t = t->prev;

	}
}

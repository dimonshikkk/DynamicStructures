#include "stdafx.h"
#include "stack.h"
#include <iostream>


node* first(int d)
{
	node *top=new node;
	top->d=d;
	top->p=0;
	return top;
}
void push(node **top, int d)
{
	node *pv = new node;
	pv->d = d;
	pv->p = *top;
	*top = pv;
}
int pop(node **top)
{
	int temp = (*top)->d;
	node *pv = *top;
	*top = (*top)->p;
	delete pv;
	return temp;
}
void print(node **top)
{
	node *pv = top;
	while (pv != NULL)
	{
		cout << pv->d << endl;
		pv = pv->p;
	}
}

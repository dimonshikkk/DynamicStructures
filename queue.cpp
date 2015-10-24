#include "stdafx.h"
#include "queue.h"
#include <iostream>

node *first(int d)
{
	node *pv = new node;
	pv->d = d;
	pv->p = NULL;
	return pv;
}



void add(node **pend, int d)
{
	node *pv = new node;
	pv->d = d;
	pv->p = NULL;
	(*pend)->p = pv;
	*pend = pv;
}



int del(node **pbeg)
{
	int temp = (*pbeg)->d;
	node *pv = *pbeg;
	*pbeg = (*pbeg)->p;
	delete pv;
	return temp;
}



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



bool isEmpty(node *pbeg)
{
	//node *pv = pbeg;
	//if (pv == NULL) return 0;
	//else return 1;

	if (pbeg == NULL)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

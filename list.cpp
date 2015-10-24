#include "stdafx.h"
#include "list.h"
#include <iostream>

node *first(int d)
{
	node *pv = new node;
	pv->d = d;
	pv->next = NULL;
	return pv;
}



void add(node **pend, int d)
{
	node *pv = new node;
	pv->d = d;
	pv->next = NULL;
	(*pend)->next = pv;
	*pend = pv;
}



int del(node **pbeg)
{
	int temp = (*pbeg)->d;
	node *pv = *pbeg;
	*pbeg = (*pbeg)->next;
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
		pv = pv->next;
	}
}



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



node* find(node *const pbeg, int d)
{
	node *pv = pbeg;
	while (pv)
	{
		if (pv->d == d)
		{
			break;
		}
		pv = pv->next;
	}
	return pv;
}



bool del_key(node **pbeg, int key)
{
	node *pkey = find(*pbeg, key);

	if (pkey !=NULL)
	{
		if (pkey == *pbeg)
			*pbeg = (*pbeg)->next;
		else
		{
			node*p = *pbeg;
			while (p->next != pkey)
				p = p->next;
			p->next = pkey->next;
		}
		delete pkey;
		return true;
	}
	return false;
}




/*
	BRIEF: функция втсавки элемента после ключа
	IN: 
	OUT: 
*/
void insert(node*const pbeg, int key, int d)
{
	node*pkey=NULL;

	if ((pkey = find(pbeg, key))!=NULL)
	{
		node *pv = new node;
		pv->d = d;
		pv->next = pkey->next;
		pkey->next = pv;
	}
}




void insert_before(node**pbeg, int key, int d)
{
	node*pkey = NULL; 
	if ((pkey = find(*pbeg, key))!=NULL)
	{
		node*pv = new node;
		pv->d = d;
		if (pkey == *pbeg)
		{
			pv->next = *pbeg;
			*pbeg = pv;

		}
		else
		{
			pv->next = pkey;
			node*p = *pbeg;
			while (p->next != pkey)
				p = p->next;
			p->next = pv;
		}
	}
}




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
			if (pv->d < p->d)
			{
				int t = p->d;
				p->d = pv->d;
				pv->d = t;
				f = 1;
			}
			p = pv;
			pv = pv->next;
		}
	}
}


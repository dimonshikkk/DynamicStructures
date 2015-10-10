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



void add(node *pbeg, int d)
{
	node *pv = new node;
	pv->d = d;
	pv->next = NULL;
	node *p = pbeg;
	while (p->next)
	p = p->next;
	p->next = pv;
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



bool del(node **pbeg,int key)
{
	node *pkey;

	if (pkey == find(*pbeg, key))
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



node *insert(node*const pbeg,int key,int d)
{
	node*pkey;

	if (pkey = find( pbeg, key))
	{
		node *pv = new node;
		pv->d = d;
		pv->next = pkey->next;
		pkey->next = pv;
		return pv;
	}
	return 0;
}




node *insert_before(node**pbeg, int key, int d)
{
	if (node*pkey = find(*pbeg, key))
	{
		node*pv = new node;
		pv->d = d;
		if (pkey == *pbeg)
		{
			pv->next = *pbeg;
			*pbeg = pv;
			return pv;

		}
		else
		{
			pv->next = pkey;
			node*p = *pbeg;
			while (p->next != pkey)
				p = p->next;
			p->next = pv;
			return pv;
		}
	}
}

void sort(node *pbeg)
{
	node *p, *pv;
	bool f = 1;
	while (f)
	{
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
               

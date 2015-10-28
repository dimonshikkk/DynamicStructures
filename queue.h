
#include "stdafx.h"
#include <iostream>

using namespace std;


struct node
{
	int d;
	node *p;
};

node *first(int d);
void add(node **pend, int d);
void del(node **pbeg);
void print(node *pbeg);
bool isEmpty(node *pbeg);

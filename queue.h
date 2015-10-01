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
int del(node **pbeg);
void print(node *pbeg);

#include "stdafx.h"
#include <iostream>


using namespace std;


struct node
{
	int d;
	node *p;
};



node *first(int d);
void push(node **top, int d);
int pop(node**top);
void print(node *top);

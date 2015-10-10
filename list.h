#include "stdafx.h"
#include <iostream>

using namespace std;


struct node
{
	int d;
	node *next;
};

node *first(int d);
void add(node *pbeg, int d);
node* find(node *const pbeg,int d);
bool del(node **pbeg,int key);
node *insert(node *const pbeg,int key,int d);
node *insert_before(node **pbeg,int key,int d);
void sort(node *pbeg);

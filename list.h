#include "stdafx.h"
#include <iostream>

using namespace std;


struct node
{
	int d;
	node *next;
};

node *first(int d);
void add(node **pend, int d);
int del(node **pbeg);
void print(node *pbeg);
bool isEmpty(node *pbeg);
node *find(node *const pbeg, int d);
bool del_key(node **pbeg, int key);
void insert_after(node *const pbeg, int key, int d);
void insert_before(node **pbeg, int key, int d);
void sort(node *pbeg);

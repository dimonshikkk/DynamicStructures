#pragma once

#include "tree.h"



class bst :public tree
{
	bst *leftSubtree;
	bst *rightSubtree;
	int value;
public:
	bst();
	bst(int val);
	~bst();

	void addNodeWrapper(int key);
	void addNode(bst *root, int key);
	bst delNode(bst *root, int key);
	bst find(bst *root, int key);
	void findWrapper(int key);
	bst minimum(bst*root);
	void delNodeWrapper(int key);
};

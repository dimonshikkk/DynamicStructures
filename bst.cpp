#include "stdafx.h"
#include "bst.h"


bst::bst()
{
	leftSubtree = NULL;
	rightSubtree = NULL;
	value = 0;
}



bst::bst(int val)
{
	leftSubtree = NULL;
	rightSubtree = NULL;
	value = val;
}



bst::~bst()
{

}





void bst::addNode(bst *root, int key)
{
	if (key < root->value){

		if (root->leftSubtree){
			addNode(root->leftSubtree, key);
		}
		else{
			root->leftSubtree = new bst(key);
		}
	}

	if (key >= root->value){
		if (root->rightSubtree){
			addNode(root->rightSubtree, key);
		}
		else{
			root->rightSubtree = new bst(key);
		}
	}
}




void bst::addNodeWrapper(int key){
	addNode(this, key);
}

/*int bst::delNode(bst *root, int key)
{
	bst *pv=root;
	if (pv == 0) 
	if (key < pv.value)
	pv.leftSubtree = delete(pv.leftSubtree, key);
	else 
	if (key>pv.value)
		pv.rightSubtree = delNode(key);
	{
	else
		if (pv->left != 0 && pv->rigt != 0)
		{
			pv->key = minimum(pv->right)->key;
			pv->right = delete(pv, (pv->right)->key);
		else
			if (pv->left != 0)
			{
				pv = pv->left;
			}
			else
			{
				pv = pv->rigt;
			}
				return pv;
		}
	}
}*/





bst bst::find(bst *root,int key)
{
	if (!root) return NULL;
	if (key == root->value)
		return *root;
	if (key < root->value)
	{
		return (find(root->leftSubtree, key));
	}
	else
	{
		return find(root->rightSubtree, key); 
	}

}

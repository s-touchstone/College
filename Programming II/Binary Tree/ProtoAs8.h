#include "BoolAs8.h"

#ifndef		PROTOAS8_H
#define		PROTOAS8_H

typedef struct treenode 
{
	int data;
	struct  treenode *left, *right;
}*binarytree;

#endif

void init_tree(binarytree*);
boolean is_empty(binarytree);
boolean is_full(void);
void add_data(binarytree*, int);
void delete_data(binarytree*, int);
void LNR(binarytree);
void RNL(binarytree);
#include "ProtoAs8.h"
#include <stdio.h>
#include <stdlib.h>

void init_tree(binarytree *t)
{
	(*t) = NULL;
}

boolean is_empty(binarytree t)
{
	if (t == NULL)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

boolean is_full(void)
{
	binarytree temp;
	temp = (binarytree)malloc(sizeof(struct treenode));
	if (temp == NULL)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

void add_data(binarytree *t,int add)
{
	if ((*t) == NULL)
	{
		binarytree temp;
		temp = (binarytree)malloc(sizeof(struct treenode));
		temp->data = add;
		temp->left = NULL;
		temp->right = NULL;
		(*t) = temp;
	}
	else
	{
		if (add <= (*t)->data)
		{
			add_data(&(*t)->left, add);
		}
		else
		{
			add_data(&(*t)->right, add);
		}
	}
}

void delete_data(binarytree *t,int del)
{
	binarytree temp;
	temp = (binarytree)malloc(sizeof(struct treenode));
	if ((*t) != NULL)
	{
		if ((*t)->data == del)
		{
			if (((*t)->left == NULL) && ((*t)->right == NULL))
			{
				temp = (*t);
				(*t) = NULL;
				free(temp);
			}
			else if (((*t)->right == NULL) && ((*t)->left != NULL))
			{
				temp = (*t);
				(*t) = (*t)->left;
				free(temp);
			}
			else if (((*t)->left == NULL) && ((*t)->right != NULL))
			{
				temp = (*t);
				(*t) = (*t)->right;
				free(temp);
			}
			else
			{
				temp = (*t)->right;
				while (temp->left != NULL)
				{
					temp = temp->left;
				}
				temp->left = (*t)->left;
				temp = (*t);
				(*t) = (*t)->right;
				free(temp);
			}
		}
		else
		{
			if (del <= (*t)->data)
			{
				delete_data(&(*t)->left, del);
			}
			else
			{
				delete_data(&(*t)->right, del);
			}
		}
	}
	else
	{
		printf("Error: %d was not found!\n", del);
	}
}

void LNR(binarytree t)
{
	if (t != NULL)
	{
		LNR(t->left);
		printf("%d ", t->data);
		LNR(t->right);
	}
}

void RNL(binarytree t)
{
	if (t != NULL)
	{
		RNL(t->right);
		printf("%d ", t->data);
		RNL(t->left);
	}
}
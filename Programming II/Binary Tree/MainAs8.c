//Steven Touchstone
//Professor Tarver, Mary
//Programming II
//04/28/2017
//Output:

#include <stdio.h>
#include "BoolAs8.h"
#include "ProtoAs8.h"
#include "DefsAs8.c"

void main()
{
	boolean quit = FALSE;
	binarytree root;
	init_tree(&root);
	while (quit == FALSE)
	{
		int select;
		printf("1. Add\n2. Delete\n3. Print(LNR)\n4. Print(RNL)\n5. Exit\nPlease Choose a selection:");
		scanf("%d", &select);
		switch (select)
		{
			int data;
			case 1:
			{
				if (!is_full())
				{
					printf("What would you like to add? ");
					scanf("%d", &data);
					add_data(&root, data);
				}
				else
				{
					printf("Error: The Binary Tree is Full!!!");
				}
				break;
			}
			case 2:
			{
				if (!is_empty(root))
				{
					printf("What would you like to delete? ");
					scanf("%d", &data);
					delete_data(&root, data);
				}
				else
				{
					printf("Error: The binary tree is empty!\n");
				}
				break;
			}
			case 3:
			{
				if (!is_empty(root))
				{
					LNR(root);
					printf("\n");
				}
				else
				{
					printf("Error: The binary tree is Empty!\n");
				}
				break;
			}
			case 4:
			{
				if (!is_empty(root))
				{
					RNL(root);
					printf("\n");
				}
				else
				{
					printf("Error: The binary tree is Empty!\n");
				}
				break;
			}
			case 5:
			{
				quit = !quit;
				break;
			}
			default:
			{
				printf("Error: Invalid Selection!\n");
			}

		}//switch
	}//while
}//main
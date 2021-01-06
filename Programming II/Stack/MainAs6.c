//Steven Touchstone
//Professor Tarver
//Programming 2
//03/24/17
//OUTPUT: display a menu to prompt for pushing an integer into a stack, popping an integer out of a stack,
//		printing all integers stored in a stack, or to quit the program. Upon popping, it will print the number popped.
//		Upon printing, the output will display all of the current stored integers within the stack.

#include <stdio.h>
#include "ProtoAs6.h"
#include "DefsAs6.c"  //Do Not use in Visual Studio it causes a "declaration in wrong order" error.

int main()
{
	boolean quit = FALSE;
	stack top;
	init_stack(&top);							//Call to initialize stack
	while (quit == FALSE)
	{
		int men_sel;
		printf("1.Push\n2.Pop\n3.print\n4.quit\nselection:");
		scanf("%d", &men_sel);
		switch (men_sel)
		{
		case 1:								//See if allocated memory for stack is full. 
		{									//If not, promt for integer to push into stack.
			if (!is_full())					//If it is, print error. (this should NEVER happen)
			{
				int data_item;
				printf("\nInput integer:");
				scanf("%d", &data_item);
				printf("\n");
				push(&top, data_item);		//Call push function to push into stack.
			}
			else
			{
				printf("\nError:The stack is full!\n\n");
			}
			break;
		}
		case 2:								//See if there are no integers in stack
		{									//If not, print error.
			if (!is_empty(top))				//If so, pop the last integer entered and display it.
			{
				int pop_item;
				pop_item = pop(&top);		//Call pop function to pop out last integer in stack.
				printf("\nInteger popped:%d\n\n", pop_item);
			}
			else
			{
				printf("\nError:The stack is empty!\n\n");
			}
			break;
		}
		case 3:								//Print all the integers currently in the stack.
		{
			if (!is_empty(top))				//If stack is not empty print contents.
			{
				printf("\nCurrently in the stack:\n");
				print_stack(top);			//Call the stack printing function.
				printf("\n");
			}
			else							//If it is empty, print "empty" message.
			{
				printf("\nError:The stack is empty!\n\n");
			}
			break;
		}
		case 4:								//exit program
		{
			quit = !quit;
			break;
		}
		default:							//If selection is other than listed, print error.
		{
			printf("\nError:Incorrect selection!\n\n");
		}
		}
	}
}

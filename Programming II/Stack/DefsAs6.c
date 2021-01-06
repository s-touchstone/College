#include <stdio.h>
#include <stdlib.h>
#include "ProtoAs6.h"
//Initialize the stack to NULL
void init_stack(stack *s)
{
	*s = NULL;
}
//Create a boolean type of is full to check if allocated memory for stack is full. (it should NEVER be)
boolean is_full(void)
{
	stack temp;
	temp = (stack)malloc(sizeof(struct stacknode));		//Allocate memory of stack type to the size of the stacknode structure.
	if (temp == NULL)									//If the stack is not full.
	{
		return TRUE;
	}
	else												//If the stack is full empty it and return FALSE. (it should NEVER run)
	{
		free(temp);
		return FALSE;
	}
}
//Create a boolean type of is empty to check if the stack is empty.
boolean is_empty(stack s)								
{
	if (s == NULL)										//If the stack is empty return TRUE.
	{
		return TRUE;
	}
	else												//If the stack is not empty return FALSE.
	{
		return FALSE;
	}													//Another way to do the same is below
}														/*	boolean is_empty(stack s)
															{
															return (s==NULL);
															}*/
//Create the function to push integers onto the stack.
void push(stack*s, int num)
{
	stack temp;
	temp = (stack)malloc(sizeof(struct stacknode));		//Assign and allocate a temporary stack to the size of a stacknode structure.
	temp->data = num;									//Assign the input integer to the data part of the stack.
	temp->next = *s;									//Assign the next part of the main stack.
	*s = temp;											//Assign the temporary stack to the next part of the main stack.
}
//Create the function to pop integers out of the stack.
int pop(stack*s)
{
	stack temp;
	int data_popped;
	temp = *s;											//Assign the main part of the stack to the temporary stack.
	data_popped = temp->data;							//Assign the integer stored in the temporary stack to a variable.
	*s = temp->next;									//Assign the the next part of the main stack to the temporary next part.
	free(temp);											//Clear the temporarily allocated memory for the stack.
	return data_popped;									//Return the integer to main to be printed.
}
//Create function to print all integers in the stack without removing them from it.
void print_stack(stack s)
{
	if (!is_empty(s))									//Print the last to the first integer until it gets to NULL value.
	{
		printf("%d\n", s->data);						//These two lines may switch positions.
		print_stack(s->next);							//The effect is printing the numbers in reverse.
	}
}
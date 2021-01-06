#include "BoolAs6.h"

#ifndef		PROTOAS6_H
#define		PROTOAS6_H

typedef struct stacknode						//Define the stack for storing the integers.
{												//Each piece of the stack is called a stacknode.
	int data;									//The stack itself is just called stack.
	struct stacknode *next;
} *stack;

#endif
												//Declare the prototypes for the functions
void init_stack(stack*);						//Stack initiation function.
boolean is_full(void);							//Is memory full function.
boolean is_empty(stack);						//Is stack empty function.
void push(stack*, int);							//Push integer to stack function.
int pop(stack*);								//Pop integer from stack function.
void print_stack(stack);						//Print all stack integers function.
void print_stack(stack);						//Print all stack integers function.
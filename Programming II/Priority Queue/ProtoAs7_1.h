#include "BoolAs7_1.h"							//include header files used in ProtoAs7

#ifndef			PROTOAS7_1_H					//if header not defined
#define			PROTOAS7_1_H					//define header

typedef struct queuenode						//Define the structure queuenode comprised of two parts:
{
	int data;									//1. The integer named data
	int prio;									//2. The integer named prio
	struct queuenode *next;						//3. The structure part of the queuenode called next
} *node_pointer;								//It is within the type called node_pointer

typedef struct endpointer						//Define the structure endpointer comprised of two parts:
{
	node_pointer front;							//1. The node_pointer type called front
	node_pointer back;							//2. The node_pointer type called back
} *queue;										//It is within the type called queue

void init_queue(queue*);						//prototype for initiating the queue
boolean is_full(void);							//prototype for checking for full memory
boolean is_empty(queue);						//prototype for checking the contents of queue
void add(queue*, int, int);						//prototype for adding to the queue
int fetch(queue*);								//prototype for fetching from the queue
void print_queue(queue);						//prototype for printing the contents of the queue

#endif											//end definition of header

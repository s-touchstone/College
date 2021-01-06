#include "BoolAs7.h"											//include header files used in DefAs7
#include "ProtoAs7.h"
#include <stdlib.h>

																//Define initialization
void init_queue(queue*q)										//Take a queue from sender
{
	(*q) = (queue)malloc(sizeof(struct endpointer));			//alloc mem the size of the struct endpointer
	(*q)->front = NULL;											//assign endpointer front to NULL
	(*q)->back = NULL;											//assign endpointer back to NULL
}

																//Define the fuction for the queue is full.
boolean is_full(void)											//take nothing from sender
{
	node_pointer temp;											//create temp node_pointer
	temp = (node_pointer)malloc(sizeof(struct queuenode));		//assign temp to alloc mem the size of queuenode
	if(temp == NULL)											//if temp is NULL or availiable for writing
	{
		return TRUE;											//return TRUE to sender
	}
	else														//if temp is filled or not availiable for writing
	{
		free(temp);												//empty temp mem
		return FALSE;											//return FALSE to sender
	}
}

																//Define the fuction for the queue is NULL or empty
boolean is_empty(queue q)										//take a queue from sender
{
	if ((q->front == NULL) && (q->back == NULL))				//if the queue front and back are both NULL or empty
	{
		return TRUE;											//return TRUE to sender
	}
	else														//if the queue has something in it
	{
		return FALSE;											//return FALSE to sender
	}
}

																//Define the function to add to the queue.
void add(queue*q, int x)										//take the queue and an integer from sender
{
	node_pointer temp;											//create a temporary node_pointer
	temp = (node_pointer)malloc(sizeof(struct queuenode));		//assign temp to alloc'd mem the size of queuenode
	temp->data= x;												//assign the temp data to the interger from sender
	temp->next = NULL;											//assign the temp next to NULL
	if (is_empty(*q))											//if the queue from sender is empty
	{
		(*q)->front = temp;										//assign the queue front to temp
		(*q)->back = temp;										//assign the queue back to temp
	}
	else														//if there is already items in the queue
	{
		(*q)->back->next = temp;								//assign the queue back next to temp
		(*q)->back = temp;										//set back pointer to temp
	}
}

																//Define the function to fetch from the queue.
int fetch(queue*q)												//take a queque from sender
{
	int removed;												//create a var for the removed data part of object
	node_pointer temp;											//create a temp node_pointer
	temp = (*q)->front;											//assign temp to the sent queue front 
	removed = temp->data;										//assign removed var to the temp's data part
	if ((*q)->front == (*q)->back)								//if the queue's front and back node are the same
	{
		(*q)->front = NULL;										//assign the queue front to NULL
		(*q)->back = NULL;										//assign the queue back to NULL
	}
	else														//if the queue's front & back nodes are not the same
	{
		(*q)->front = (*q)->front->next;						//assign the queue front to the queue front next
		free(temp);												//empty temporary
	}
	return removed;												//return the data in removed to sender
}

																//Define the function to print the queque.
void print_queue(queue q)										//take a queue from sender
{
	node_pointer temp;											//create a temp node_pointer
	temp = q->front;											//assign temp to the sender's queue front
	while(temp != NULL)											//while loop if temp is NULL
	{
		printf("%d\n", temp->data);								//print the data protion of temp
		temp = temp->next;										//reassign the temp to the temp's next node
	}
}
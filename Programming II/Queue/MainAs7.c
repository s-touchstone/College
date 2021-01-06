//Steven Touchstone
//Professor Tarver
//Programming 2
//04/07/17
//Output: Menu consisting of add, fetch, print, and quit./Prompt to add to queue/Item fetched and integer/
//A list of the integers in the queue./Various error messages.

#include "BoolAs7.h"													//Include header files used in main
#include "ProtoAs7.h"
#include <stdio.h>
#include "DefsAs7.c"													//Do not use in VS

int main()
{
	boolean quit = FALSE;												//Set quit option to FALSE
	queue myqueue;														//create a queue
	init_queue(&myqueue);												//initialize queue to NULL
	while (quit == FALSE)												//while loop on quit option
	{
		int selection;													//create menu option variable
		printf("1.Add\n2.Fetch\n3.Print\n4.Quit\nEnter Selection:");	//print menu options
		scanf("%d", &selection);										//assign input to menu option variable
		switch (selection)												//switch on the menu option variable
		{
			case 1:														//if menu option var is 1
			{
				if (!is_full())											//if the memory allocated to queue is not full
				{
					int item;											//create a var for entering to queue
					printf("Enter an Integer:");						//prompt to enter an integer for the var
					scanf("%d", &item);									//assign input to var for que
					add(&myqueue, item);								//call add and send it queue and var to add
					printf("\n");
				}
				else													//if mem alloc'd for queue is full
				{
					printf("Error: The Queue Is Full!\n");				//print error message
				}
				break;													//end case 1, return to while loop iteration
			}
			case 2:														//if menu option var is 2
			{
				if (!is_empty(myqueue))									//if the queue is not empty
				{
					int item;											//create a int var for the item to be fetched
					item = fetch(&myqueue);								//assign var to int returned from fetch
					printf("\nFetched: %d\n\n", item);					//print the var returned
				}
				else
				{														//if nothing is in the queue
					printf("Error: The Queue Is Currently Empty!\n\n");	//print error for empty queue
				}
				break;													//end case 2, return to while loop iteration
			}
			case 3:														//if menu option var is 3
			{
				if (!is_empty(myqueue))									//if the queue is not empty
				{
					printf("\nCurrently in queue:\n");					//print text to indicate what prints after
					print_queue(myqueue);								//call print_queue and send it myqueue
					printf("\n");										//print newline after what prints
				}
				else													//if the queue is empty
				{
					printf("Error: The Queue Is Currently Empty!\n\n");	//print error for empty queue
				}
				break;													//end case 3, return to while loop iteration
			}
			case 4:														//if menu option var is 4
			{
				quit = !quit;											//assign quit to not quit or FALSE to TRUE
				break;													//end case 4, return to while loop iteration (FALSE)
			}
			default:													//if menu option variable is not 1-4 
			{
				printf("Error: Invalid Selection!\n\n");				//print error for invalid option
			}//default
		}//switch
	}//while
	return 0;															//return nothing, end main program
}//main
//Steven Touchstone
//Computer Programming 1
//Professor Vladimir Ufimtsev
//11/02/16
//Insertion Sort

#include<stdio.h>
#include "swap.h"
#include "insertion.h"
#include "printarray.h"

int main()
{
	int i,n;

	//Ask the user to enter the size of the array, and then enter each value:
	printf("Enter size of array: ");
	scanf("%d", &n);
	int A[n];
	printf("Enter the values of the array (press ENTER after each value):\n");
	for(i=0; i<n; i++)
	{
		scanf("%d", &A[i]);
	}
	
	//Print out initial array:
	printarray(A, n);

	insertion(&A[0],n);	

	//Print out the sorted array
	printf("Sorted ");
	printarray(A, n);
	
	return 0;

}







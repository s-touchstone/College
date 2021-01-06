//Print array
#ifndef PRINT
#define PRINT

void printarray(int A[], int n)
{
	int i;
	printf("A = [");
		for(i=0; i<n; i++)
		{
			printf("%d ",A[i]);
		}		
		printf("]\n");

}

#endif
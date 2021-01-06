//Steven Touchstone
//Programming 2 11AM TR
//Professor Tarver
//1/27/17

#include<stdio.h>

int main(int argc, char*argv[])
{
	int N, inc, col, row;
//If all three arguments are entered
	if(argc==3)
	{
		sscanf(argv[1],"%d\n",& N);
		sscanf(argv[2],"%d\n",& inc);
	}
//If more than three arguments are entered
	else
	{
		printf("Sorry only two numbers are alowed!\n");
		printf("Enter the number for the table size:");
		scanf("%d",& N);
		printf("\n");
		printf("Enter the number to increment by:");
		scanf("%d",& inc);
		printf("\n");
	}
//Make sure 'N' variable is between 0 and 10
	while((N<0)||(N>10))
	{
		printf("Sorry the table must be between 0 and 10\n");
		printf("Enter the number for the table size:");
		scanf("%d",& N);
		printf("\n");
		
	}
//Make sure 'inc' variable is positive
	while(inc<=0)
	{
		printf("The increment amout must be positive\n");
		printf("Enter the number to increment by:");
		scanf("%d",& inc);
		printf("\n");
	}
//Print the first row with the 'row' values
	printf("    ");
	for(row=-N; row<=N; row=row+inc)
	{
		printf("%4d",row);
	}
	printf("\n");
//Print each column and row in a multiplication table
	for(row=-N; row<=N; row=row+inc)
		{
			printf("%4d",row);
			for(col=-N; col<=N; col=col+inc)
			{
				printf("%4d",col*row);
			}
		printf("\n");
		}
	printf("\n");
	return 0;
}

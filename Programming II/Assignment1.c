//Steven Touchstone
//Computer Programming 2
//Professor Tarver
//1-20-17
//Print the sum of the first 100 pos. integers 
//and the sum of the first 25 neg. integers

#include<stdio.h>

main(void)
{
	int i,sum;
	sum=0;
	for(i=1;i<=100;i++)
	{
		sum=i+sum;
	}

	printf("The sum of the first 100 positive integers is:%d\n", sum);

	sum=0;
	for(i=-1;i>=-25;i--)
	{
		sum=i+sum;
	}

	printf("The sum of the first 25 negative integers is: %d\n", sum);

	return 0;
}

//Steven Touchstone
//Computer Programming 2
//Tarver Section 2
//1-20-17
//First Assignment/Print the sum of the first 100 pos. integers and the sum of the first 25 neg. integers

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

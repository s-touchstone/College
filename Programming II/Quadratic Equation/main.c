//Steven Touchstone
//Prof. Tarver
//02-17-17
//Output: Using three number, calculate for X using quadratic equation and ouput real or complex number

#include<stdio.h>
#include "linear.h"
#include "quad.h"

int main(int arg, char*argv[])
{
	int a,b,c;
	if(arg==4)
	{
		sscanf(argv[1],"%d",&a);
		sscanf(argv[2],"%d",&b);
		sscanf(argv[3],"%d",&c);
		if(a==0)
		{
			if(b==0)
			{
				printf("Error: c != x\n");
			}
			else
			{
				solve_linear(b,c);
			}
		}
		else
		{
			solve_quad(a,b,c);
		}
	}
	else
	{
		printf("Error: This program needs 3 arguments! Please retry!\n");
	}
return 0;
}

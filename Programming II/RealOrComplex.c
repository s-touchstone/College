//Steven Touchstone
//Prof. Tarver
//02--17
//Output: Using three number, calculate for X using quadratic equation and ouput real or complex number

#include<stdio.h>
#include<math.h>
#include<stdlib.h>//my computer only

int solve_linear();
int solve_quad();
int solve_complex();
int solve_real();
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

int solve_linear(int b,int c)
{
	float x;
	x=(float)-c/b;
	printf("x=%.3f\n",x);
}

int solve_quad(int a,int b,int c)
{
	if((pow(b,2)-4*a*c)<0)
	{
		solve_complex(a,b,c);
	}
	else
	{
		solve_real(a,b,c);
	}
}

int solve_complex(int a,int b,int c)
{
	float x_real,x_img;
	x_real=(float)-b/(2*a);
	x_img=(float)(sqrt(abs(pow(b,2)-4*a*c)))/(2*a);
	printf("x=%.3f + %.3fi & ",x_real, x_img);
	printf("x=%.3f - %.3fi\n",x_real, x_img);
}

int solve_real(int a,int b,int c)
{
	float x1,x2;
	x1=(float)(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
	x2=(float)(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
	printf("x=%.3f & %.3f\n",x1,x2);
}

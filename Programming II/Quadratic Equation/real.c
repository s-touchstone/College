#include<stdio.h>
#include<math.h>

void solve_real(int a,int b,int c)
{
	float x1,x2;
	x1=(float)(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
	x2=(float)(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
	printf("x=%.3f & %.3f\n",x1,x2);
}

#include<stdio.h>
#include<math.h>
//#include<stdlib.h>// My computer only

void solve_complex(int a,int b,int c)
{
	float x_real,x_img;
	x_real=(float)-b/(2*a);
	x_img=(float)(sqrt(abs(pow(b,2)-4*a*c)))/(2*a);
	printf("x=%.3f + %.3fi & ",x_real, x_img);
	printf("x=%.3f - %.3fi\n",x_real, x_img);
}

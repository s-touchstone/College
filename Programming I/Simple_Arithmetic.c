//Steven Touchstone
//Programming I
//Simple Arithmetic Examples in C

#include<stdio.h>

int main()
{

	//Addition

	int a,b,c;
	a = 2;
	b = 3;
	c = a+b;

	printf("%d + %d = %d \n",a,b,c);

	//Subtraction

	int d,e,f;
	d = 10;
	 e= 7;
	f = d-e;

	printf("%d - %d = %d \n",d,e,f);

	//Multiplication

	int g,h,i;
	g = 20;
	h = 3;
	i=g*h;

	printf("%d * %d = %d \n", g,h,i);

	//Division

	float j,k,l;
	j=1;
	k=3;
	l=j/k;

	printf("%f / %f = %f \n", j,k,l);

	//Addition and multiplication

	int m,n,o,p;
	m=3;
	n=4;
	o=5;
	p = (m+n)*o;

	printf("(%d + %d)*%d = %d \n",m,n,o,p);

	//Remainder (mod)

	int q,r,s;
	q = 5;
	r = 3;
	s= q%r;

	printf("%d mod %d = %d \n", q,r,s);

	//Overwriting variables

	int t;
	t=0;
	t = t+1;
	t = t+1;
	t =t*2;
	
	printf("%d \n", t);
	
	return 0;
}


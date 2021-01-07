//Steveen Touchstone
//Programming 1
//Professor Ufimtsev
//Create Array to store and print 
//the first 100 Fibonacci Numbers

#include <stdio.h>

int main()
{
    double f[100]={};
	int i;
	
	//Initializing:
	f[0]=1;
	f[1]=1;
	
	printf("%f \n",f[0]);
	printf("%f \n",f[1]);
	
	//Compute, store, and print the other 98 fibonacci numbers:
	for(i=2; i<100; i++)
	{
		f[i] = f[i-1] + f[i-2];
		printf("%f \n",f[i]);
	}
	
    return 0;
}

//Steven Touchstone
//Programming 1
//Professor Ufimtsev
//calculate store in array and 
//print the first 100 Fibonacci Numbers 
//(Golden Ratio)

#include <stdio.h>
#include<math.h>

int main()
{
    double f[100]={};
	int i;
	
	//Array for ratios:
	double g[100]={};
	
	//Initializing:
	f[0]=1;
	f[1]=1;
	
	//Compute, store fibonacci numbers, and the ratio f[n+1]/f[n]:
	for(i=2; i<100; i++)
	{
		f[i] = f[i-1] + f[i-2];
		g[i]=f[i]/f[i-1];
		
		printf("%.40f \n",g[i]);
	}
	
	//The actual limit:
	double gold = (1+sqrt(5.0))/2;
	printf("The actual limit is (approx): %.40f \n", gold);
	
    return 0;
}

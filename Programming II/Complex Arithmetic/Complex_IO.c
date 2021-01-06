//definitions for read write of complex

#include "complex.h"//for defined 'complex' type
#include <stdio.h>

//Reading and assigning input for complex numbers to the defined 'complex' structure 
complex Read_Complex()
{
	complex num;
	printf("Enter Real Part:");
	scanf("%d", &num.real);
	printf("Enter Imaginary Part:");
	scanf("%d", &num.img);
	printf("\n");
	return num;
	
}

//Printing the complex numbers back after the arithmetic
void Write_Complex(complex ans)
{
	printf("%d + %di\n",ans.real, ans.img);	
}

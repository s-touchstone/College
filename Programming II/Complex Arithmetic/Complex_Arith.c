//definitions of complex arithmetic

#include "complex.h"//for defined 'complex' type
#include <stdio.h>

complex ans; //used in nearly all subprograms so declared outside

//Addition of complex numbers
complex Add_Complex(complex num1, complex num2)
{
	ans.real = num1.real + num2.real;
	ans.img = num1.img + num2.img;
	return ans;
}

//Subtraction of complex numbers
complex Sub_Complex(complex num1, complex num2)
{
	ans.real = num1.real - num2.real;
	ans.img = num1.img - num2.img;
	return ans;
}

//Multiplication of complex numbers
complex Mul_Complex(complex num1, complex num2)
{
	ans.real = (num1.real * num2.real) - (num1.img * num2.img);
	ans.img = (num1.real * num2.img) + (num2.real * num1.img);
	return ans;
}

//Division of complex numbers
complex Div_Complex(complex num1, complex num2)
{
	if((num2.real == 0) && (num2.img == 0))//Print error if division by zero
	{
		printf("Error: You cannot divide by zero!!\n");
	}
	else
	{
		complex numer, denom;
    		float ans_real, ans_img;
		numer = Mul_Complex(num1, Con_Complex(num2));
		denom = Mul_Complex(num2, Con_Complex(num2));
		ans_real = (float)numer.real / (float)denom.real;
		ans_img = (float)numer.img / (float)denom.real;
		printf("%f + %fi\n", ans_real, ans_img);
	}
}

//Conjuction of a complex number
complex Con_Complex(complex num2)
{
	ans.real = num2.real;
	ans.img = -1 * num2.img;
	return ans;
}

//Negating of a complex number
complex Neg_Complex(complex num1)
{
	ans.real = -1 * num1.real;
	ans.img = -1 * num1.img;
	return ans;
}


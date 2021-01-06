//Steven Touchstone
//Professor Tarver
//02/28/2017
//output: the mathematical, complex number solution to a complex number equation

#include <stdio.h>
#include "complex.h"
#include "boolean.h"
#include "Complex_IO.h"
#include "Complex_IO.c"
#include "Complex_Arith.h"
#include "Complex_Arith.c"

int main()
{
	complex num1, num2, ans;
	boolean quit = FALSE;
	boolean showmenu = TRUE;
	int menu_sel;
	//While quit is FALSE 'do code' loop
	while(!quit)
	{
		//If showmenu is TRUE 'do code'
		if(showmenu)
		{
			printf("\n1.Add\n2.Subtract\n3.Multiply\n4.Divide\n5.Conjugate\n6.Negate\n7.Toggle Menu\n8.Quit\n\n");
			printf("Enter a selection:");
			scanf("%d", &menu_sel);
			//printf("\n");
		}
		//If showmenu is not TRUE 'do code'
		else
		{
			printf("\n");
			printf("Enter a selection(7 for menu):");
			scanf("%d", &menu_sel);
			printf("\n");
		}
		//Selection of math to be done
		switch(menu_sel)
		{
			//Addition
			case 1: num1 = Read_Complex();
				num2 = Read_Complex();
				ans = Add_Complex(num1, num2);
				Write_Complex(ans);
				break;
			//Subtraction
			case 2:	num1 = Read_Complex();
				num2 = Read_Complex();
				ans = Sub_Complex(num1, num2);
				Write_Complex(ans);
				break;
			//Multiplication
			case 3:	num1 = Read_Complex();
				num2 = Read_Complex();
				ans = Mul_Complex(num1, num2);
				Write_Complex(ans);
				break;
			//Division
			case 4:	num1 = Read_Complex();
				num2 = Read_Complex();
				ans = Div_Complex(num1, num2);
				break;
			//Conjugation
			case 5:	num2 = Read_Complex();
				ans = Con_Complex(num2);
				Write_Complex(ans);
				break;
			//Negation
			case 6:	num1 = Read_Complex();
				ans = Neg_Complex(num1);
				Write_Complex(ans);
				break;
			//Change showmenu to not showmenu and vice versa
			case 7:	showmenu = !showmenu;
				break;
			//exit program
			case 8:	quit = TRUE;
				break;
		}
	}
return 0;
}

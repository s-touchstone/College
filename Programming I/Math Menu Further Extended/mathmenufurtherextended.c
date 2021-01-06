// Assignment #3
// Steven Touchstone
// Prgramming 1 12:30 PM
// Professor Vladimir Ufimtsev
// 09/30/16

//call headers
#include<stdio.h>
#include<math.h>
#define size 20

//start of main program
int main()
{
	//declare variables
	int sel, num1, num2, ans, i, j, number, f[size], table[10][10];
	float fnum1, fnum2, fans;
	
	//assign primary variables
	sel = menu();
	f[0] = 1;
	f[1] = 1;
	number = 1;
	
	while(sel != 10)
	{
		switch (sel)
		{
			//Addition
			case 1:
				printf("Enter your first number:");
				scanf("%d", &num1);
				printf("Enter your second number:");
				scanf("%d", &num2);
				ans = num1 + num2;
				printf("The addition of %d and %d is %d\n\n", num1, num2, ans);
				break;
				
			//Subtraction
			case 2:
				printf("Enter your first number:");
				scanf("%d", &num1);
				printf("Enter your second number:");
				scanf("%d", &num2);
				ans = num1 - num2;
				printf("The difference between %d and %d is %d\n\n", num1, num2, ans);
				break;
				
			//Multiplication
			case 3:
				printf("Enter your first number:");
				scanf("%d", &num1);
				printf("Enter your second number:");
				scanf("%d", &num2);
				ans = num1 * num2;
				printf("The mulptiple of %d and %d is %d\n\n", num1, num2, ans);
				break;
				
			//Absolut Value
			case 4:
				printf("Enter a number:");
				scanf("%d", &num1);
				ans = abs(num1);
				printf("The abosolute value of %d is %d\n\n", num1, ans);
				break;
				
			//Division
			case 5:
				printf("Enter your first number (in decimal form):");
				scanf("%f", &fnum1);
				printf("Enter your second number (in decimal form):");
				scanf("%f", &fnum2);
				fans = fnum1 / fnum2;
				printf("The ratio of %f divided by %f is %f\n\n", fnum1, fnum2, fans);
				break;
				
			//Square Root
			case 6:
				printf("Enter a non-negative number:");
				scanf("%f", &fnum1);
				fans = sqrt(fnum1);
				printf("The square root of %f is %f\n\n", fnum1, fans);
				break;
				
			//Power of
			case 7:
				printf("Enter a number:");
				scanf("%f", &fnum1);
				printf("Enter the expnent:");
				scanf("%f", &fnum2);
				fans = pow(fnum1,fnum2);
				printf("%f to the power of %f is %f\n\n", fnum1, fnum2, fans);
				break;
				
			//Fibonnaci numbers
			case 8:
				for(i = 2; i < size; i++)
				{
					f[i] = f[i-1] + f[i-2];
				}
				for(i = 0; i < size; i++)
				{
					printf("%d\n", f[i]);
				}
				printf("\n");
				break;
				
			//2D array for firt 100 numbers
			case 9:
				for(i = 0; i < 10; i++)
				{
					for(j = 0; j < 10; j++)
					{
						table[i][j] = number;
						number++;
					}
				}
				for(i = 0; i < 10; i++)
				{
					for(j =0; j < 10; j++)
					{
						printf("%d ", table[i][j]);
					}
					printf("\n");
				}
				printf("\n\n");
				break;
				
			//Wrong selection
			default:
				printf("%d is not a valid selection, Please try again!\n\n", sel);
		}
		sel = menu();
	}
ending();
}

//selection menu
int menu()
{
	int choice;
		printf("1 Addition\n");
		printf("2 Subtraction\n");
		printf("3 Multiplication\n");
		printf("4 Absolute Value\n");
		printf("5 Division\n");
		printf("6 Square Root\n");
		printf("7 Power\n");
		printf("8 Fibonnaci numbers\n");
		printf("9 2D array table first 100 numbers\n");
		printf("10 Exit\n");
		printf("Enter a selection from above:");
		if(scanf("%d", &choice) != 1)
		{
			printf("This was not a valid selection! Please restart the program!\n");
			return 10;
		}
		return choice;
}

//End of program
ending()
{
	printf("The program will end now, Good bye!\n\n");
}
//math options menu
//Steven Touchstone
#include<stdio.h>
#include<math.h>

int menu();
void ending();

int main()
{
	int selection, num1, num2, ans;
	float fnum1, fnum2, fans;      
	
	selection = menu();
	
	while (selection != 8)
	{
		switch (selection)
		{
			//Addition
			case 1:
				printf("Enter first number:");
				scanf("%d", &num1);
				printf("Enter second number:");
				scanf("%d", &num2);
				ans = num1 + num2;
				printf("%d + %d = %d\n", num1, num2, ans);
				break;
			case 2:
				printf("Enter first number:");
				scanf("%d", &num1);
				printf("Enter second number:");
				scanf("%d", &num2);
				ans = num1 - num2;
				printf("%d - %d = %d\n", num1, num2, ans);
				break;
			case 3:
				printf("Enter first number:");
				scanf("%d", &num1);
				printf("Enter second number:");
				scanf("%d", &num2);
				ans = num1 * num2;
				printf("%d * %d = %d\n", num1, num2, ans);
				break;
			case 4:
				printf("Enter a number:");
				scanf("%d", &num1);
				ans = abs(num1);
				printf("|%d| = %d\n", num1, ans);
				break;
			case 5:
				printf("Enter first number:");
				scanf("%f", &fnum1);
				printf("Enter second number:");
				scanf("%f", &fnum2);
				fans = fnum1 / fnum2;
				printf("%f / %f = %f\n", fnum1, fnum2, fans);
				break;
			case 6:
				printf("Enter number(non-negative):");
				scanf("%f", &fnum1);
				fans = sqrt(fnum1);
				printf("Square root (%f) = %f\n", fnum1, fans);
				break;
			case 7:
				printf("Enter first number:");
				scanf("%f", &fnum1);
				printf("Enter second number:");
				scanf("%f", &fnum2);
				fans = pow(fnum1,fnum2);
				printf("%f ^ %f = %f\n", fnum1, fnum2, fans);
				break;
			default:
				printf("%d is not a valid selection\n", selection);
		}
		selection = menu();
	}
	ending();
}
int menu()
{
	int choice;
		printf("1 Add\n");
		printf("2 Subtract\n");
		printf("3 Multiply\n");		
		printf("4 Absolute Value\n");
		printf("5 Divide\n");
		printf("6 Square Root\n");
		printf("7 Power\n");
		printf("8 Quit\n");
		printf("Enter a selection:");
		if(scanf("%d", &choice) != 1)
		{	
			printf("Invalid Selection: Restart Program\n");
			return 8;
		}
return choice;
}
void ending()
{
	printf("The program will end now, Goodbye!\n");
}













//About Me Switch

#include<stdio.h>

int main()

{
	int choice;
	printf("What would you like to know?\n0-Name\n1-Major\n2-Class\n3-Hometown\n4-Random\n");
	if(scanf("%d",& choice)!=1)
	{
		printf("Invalid Input\n");
		return 0;
	}
	switch(choice)
	{
		case 0:
			printf("Steven Touchstone\n");
			break;
		case 1:
			printf("Computer Science\n");
			break;
		case 2:
			printf("Freshman\n");
			break;
		case 3:
			printf("Elk City, Oklahoma\n");
			break;
		case 4:
			printf("Supercalifragilisticexpialidocious\n");
			break;
		default:
			printf("Invalid Imput\n");
	}	
return 0;
}

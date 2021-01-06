//Rock Paper Scissors

#include<stdio.h>
#include<stdlib.h>

int main()
{
	printf("   xxx                       xx     xx    \n");
	printf("  xxxxx                     scis   sors   \n");
	printf(" xxxxxxx                     xxx   xxx    \n");
	printf("xxxrockxx                       x x       \n");
	printf("xxxxxxxxx    xxxxpaperxxxx       x        \n");
	printf(" xxxxxxx                        x x       \n");
	printf("  xxxxx                        x   x      \n");
	printf("   xxx                        x     x     \n\n\n\n");

	int status=1, choice, number, win=0, lose=0;
	time_t t;

	while(status==1)
	{
		printf("Enter 0 for Rock, 1 for Paper, or 2 for Scissors\n");
		scanf("%d", &choice);

		//your pick
		if(choice==0)
		{
			printf("You Entered 'Rock'\n");
		}

		else if(choice==1)
		{
			printf("You entered 'Paper'\n");
		}

		else if(choice==2)
		{
			printf("You entered 'Scissors'\n");
		}

		else
		{
			printf("The selection you entered is not valid please try again.");
			continue;
		}

		//initialize randomization
		srand(time(&t));
		number=rand()%3;

		//computer's pick
		if(number==0)
		{
			printf("The computer chose 'Rock'\n");
		}

		else if(number==1)
		{
			printf("The computer chose 'Paper'\n");
		}

		else
		{
			printf("The computer chose 'Scissors'\n");
		}

		//Rules of the game
		if(choice==number)
		{
			printf("It's a tie!!!\n");
			continue;
		}

		else if(choice==0 && number==2)//rock v scissors
		{
			printf("rock beats scissors!\n");
			printf("  0     0                \n");
			printf("     <                   \n");
			printf(" \\       /   You Win!!! \n");
			printf("  \\_____/               \n");
			win=win+1;
		}

		else if(choice==1 && number==0)//paper v rock
		{
			printf("paper beats rock!\n");
			printf("  0     0                \n");
			printf("     <                   \n");
			printf(" \\       /   You Win!!! \n");
			printf("  \\_____/               \n");
			win=win+1;
		}

		else if(choice==2 && number==1)//scissors v paper
		{
			printf("scissors beat paper!\n");
			printf("  0     0                \n");
			printf("     <                   \n");
			printf(" \\       /   You Win!!! \n");
			printf("  \\_____/               \n");
			win=win+1;
		}

		else if(choice==0 && number==1)//rock v paper
		{
			printf("paper beats rock!\n");
			printf("  0     0                \n");
			printf("     <   *    I'm Sorry, \n");
			printf("   ____       You lose!!!\n");
			printf("  /    \\                \n");
			lose=lose+1;
		}

		else if(choice==1 && number==2)//paper v scissors
		{
			printf("scissors beat paper!\n");
			printf("  0     0                \n");
			printf("     <   *    I'm Sorry, \n");
			printf("   ____       You lose!!!\n");
			printf("  /    \\                \n");
			lose=lose+1;
		}

		else //scissors v rock
		{
			printf("rock beats scissors!\n");
			printf("  0     0                \n");
			printf("     <   *    I'm Sorry, \n");
			printf("   ____       You lose!!!\n");
			printf("  /    \\                \n");
			lose=lose+1;
		}

		//prompt to continue
		printf("Enter 1 to continue 0 to quit:");
		scanf("%d", &status);
	}//end of while
	printf("your wins are %d, Your losses are %d\n", win , lose);
	return 0;
}//end main

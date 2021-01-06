//Assignment #2
//About Me Revision
//Steven Touchstone
//Computer Programming 1 12:30
//9/15/16

#include <stdio.h>	
//include time header
#include <time.h>
#include <string.h>

int main()
{
	//declare type 'time_t' with variable 't'
	time_t t;
	//assign calendar time to 't'
	time(&t);
	//declare type 'char' and assign it to a possible 6 character string
	char option[6];
	int cont;
	int reset;
	reset=1;
	while(reset==1)
	{
		printf("What would you like to know?\n'A' My Name\n'B' My Major\n'C' My Class\n'D' My Hometown\n'E' Random Fact\n");
		printf("'F' Current Time and Date\n");
		//assign input to string 'option'
		scanf(" %s",&option[0]);
		//check string 'option' equals 1 character only
		if(strlen(option) != 1)
			{
				printf("\nToo many options given, please try again.\n\n");
				continue;
			}
		//switch on the first character assigned to option and then cases check for assigned string value
		switch (option[0])
		{
			case 'A':
			case 'a':
				printf("\nMy Name is Steven Touchstone\n\n");
				break;
			case 'B':
			case 'b':
				printf("\nMy Major is Computer Science\n\n");
				break;
			case 'C':
			case 'c':
				printf("\nI am a Freshman\n\n");
				break;
			case 'D':
			case 'd':
				printf("\nI'm From Elk City, Oklahoma\n\n");
				break;
			case 'E':
			case 'e':
				printf("\nI like dubstep music\n\n");
				break;
			case 'F':
			case 'f':
				//Print current time as a string
				printf("\nThe current time and date is : %s\n\n",ctime(&t));
				break;
			default :
				printf("\nInvalid Option, Please try again\n\n");
				continue;
		}
		//after cases are checked or executed ask to continue
		printf("\nWould You Like to Continue?\nEnter 1 for yes\nEnter 0 for no\n\n");
		//assign input to type int value to variable 'cont'
		scanf(" %d",&cont);
		if(cont==1)
			{
				reset=1;
				continue;
			}
		else if(cont==0)
			{
				reset=0;
			}
		else
			{
				printf("\nInput not understood.\nExiting application\n\n");
				return 0;
			}
	}
	return 0;
}

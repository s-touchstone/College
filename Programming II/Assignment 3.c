//Steven Touchstone
//Programming 2 
//Professor Tarver
//Table of #s and their square roots between two given numbers 
//in increments of another given number
//Command line input!!

#include<stdio.h>
#include<math.h>

int main(int arg, char*argv[])
{
	int start,stop,step,i;
	if(arg==4)
	{	//convert and assign
		sscanf(argv[1],"%d",&start);
		sscanf(argv[2],"%d",&stop);
		sscanf(argv[3],"%d",&step);
		//Do table
		if((start<=stop) && (step>0))
		{
			for(i=start;i<=stop;i=i+step)
			{
				if(i<0)
				{
					printf("%5d   %.3fi\n",i,sqrt(abs(i)));
				}
				else
				{
					printf("%5d   %.3f\n",i,sqrt(i));
				}//end else
			}//end for
		}//end if
		else	/*if not avalid increasing loop try decreasing loop*/
		{ 
			if((start>=stop) && (step<0))
			{
				for(i=start;i>=stop;i=i+step)
				{
					if(i<0)
					{
						printf("%5d   %.3fi\n",i,sqrt(abs(i)));
					}
					else
					{
						printf("%5d   %.3f\n",i,sqrt(i));
					}//end else
				}//end for
			}//end if			
			else	/*if arguments are an invalid loop*/
			{
				printf("Error-invalid loop\n");
			}//end else
		}//end else
	}//end if
	else	/*if no arguments are given*/
	{
		printf("Error-rerun program providing three numbers\n");
		return 0;
	}
return 0;
}//end main

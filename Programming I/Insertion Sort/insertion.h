//Insertion sort

#ifndef INSERTION
#define INSERTION

void insertion(int B[],int n)
{
 int i;
	for(i=1; i<n; i++)
	{
		int j=i;
		while(j>0 && B[j-1]>B[j])
		{
			//Swap B[j-1] and B[j]
			swap(&B[j-1],&B[j]);
			j = j-1;	
		}
	}


}
#endif

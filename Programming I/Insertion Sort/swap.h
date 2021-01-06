//Swap
#ifndef SWAP
#define SWAP

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

#endif
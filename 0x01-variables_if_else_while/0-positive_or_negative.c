#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes there */

	if(n>0)
	{	
		pritnf("%d is positive\n",n);
	}

	else if(n=0)
	{
		printf("%d is zero\n",n);
	}

	else
	{
		printf("%d is negative\n",n);
	}
	
	return(0);
}


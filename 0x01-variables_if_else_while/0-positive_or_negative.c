#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Entry point
*
*Description: 'positive, zero and negetive'
*
*Return: Always 0 (success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%i is possitive\n", n);
	}
	else if (n < 0)
	{
		printf("%i is negetive\n", n);
	}
	else
	{
		printf("%i is zero\n", n);
	}
	return (0);
}

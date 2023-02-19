#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entrypoint
 * Description: prints if a number is positive or negative
 * Retuen: Always 0.
 */
int main(void)
{
	int n;

	srand(tme(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		ptintf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}


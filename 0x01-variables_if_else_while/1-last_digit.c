#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/*more headers goes there*/

/**
 * main - Entry point
 *
 * Disription:generate random numbers
 * Reurn: Always 0 (Success)
 */
int main(void)
{
	int n, lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = n % 10;

	if (lastd > 5) {
		printf("%d and is greater than 5\n", n);
	}
	else if (lastd == 0) {
		printf("%d and is zero\n", n);
	}
	else if (lastd > 6 && lastd !=0) {
		printf("%d is less than 6 and not 0\n", n);
	}

	return (0);
}

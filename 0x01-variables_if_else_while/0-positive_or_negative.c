#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/*The program assign random number to the variable each time it is executed*/

/**
 * main - Entry point
 *
 * Description: generate random number
 *
 * Return: Always 0 (Success)
 */
int main(void)
 /*seed the random number generator*/
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	 {printf("%d is positive\n", n);
	} else if (n == 0)
	{printf("%d is zero\n", n); }
	else
	{printf("%d is negative\n", n);
	}

	return (0);
}

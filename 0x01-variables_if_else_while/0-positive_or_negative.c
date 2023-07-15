#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/*The program assign random number to the variable each time it is executed*/

/**
 * this program prints whether the number stored in the variable
 *
 * n is positive or negative
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

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/*The program assign random number to the variable each time it is executed*/

/**
 * use the main fuction
 * then use if and if else
 */
int main(void)
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

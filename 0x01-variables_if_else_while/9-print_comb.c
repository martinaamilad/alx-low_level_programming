#include <stdio.h>

/**
 * main - prints numbers with comas
 *
 * Return: Always (Success)
 */
int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(0);

		if (c != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return(0);
}

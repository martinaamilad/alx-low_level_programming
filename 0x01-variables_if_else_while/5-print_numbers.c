#include <stdio.h>

/**
 * main - print number base ten
 *
 * Return: Always (Success)
 */
int main(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		     putchar(n);
	}

	putchar('\n');

	return (0);
}

#include <stdio.h>

/**
 * main - print numbers
 *
 * Return: Always (Success)
 */
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++);
	{
		putchar(c);
	}

	for (c = 'a'; c <= 'z'; c++);
	{
		putchar(c)
	}
	
	putchar('\n');

	return (0);
}

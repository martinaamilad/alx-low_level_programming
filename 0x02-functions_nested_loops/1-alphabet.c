#include <stdio.h>

/**
 * print_alphabet - make alphabet
 *
 * Return: void
 */
void print_alphabet(void)
{
	char i;
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			putchar(i);
		}
		putchar('\n');
	}

#include "main.h"

/**
 * print_most_numbers - Print all numbers between 0 and 9
 *
 * Description: Prints the number exept 2 and 4
 *
 * Return: The numbers
 */ 
void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (n == 2 || n ==4)
		{
			continue;
		}
		else
		{
			putchar(n + '0');
		}
	}

	putchar('\n');
}

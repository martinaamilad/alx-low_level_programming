#include "main.h"
#include <stdio.h>

/**
 * print_numbers - Prints the number from 0 to 9
 *
 * Return: The number from 0 to 9
 */
void print_numbers(void)
{

	int n;
	
	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0');
	}
	
	putchar('\n');
}

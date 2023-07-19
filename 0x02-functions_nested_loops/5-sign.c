#include "main.h"

/**
 * print_sign - print the signs
 * @n: The number to be checked
 *
 * Return: 1 for pesitive num, -1 for negative num or 0 for anything else
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}

#include "main.h"

/**
 * print_square - printing the square n times
 * @size: the nuber of time
 *
 * Return: empty
 */
void print_square(int size)
{
	int x, y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x <= size; x++)
		{
			for (y = 0; y <= x; y++)
			{
				_putchar(35);
			}

			_putchar('\n');
		}
	}
}

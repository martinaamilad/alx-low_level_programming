#include "main.h"
#include <string.h>

/**
 * puts_half - to print the other half of string
 * @str: the variable
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len = strlen(str);

	if (len % 2 == 0)
	{
		int i;
		for (i = len / 2; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		int i;
		for (i = (len - 1) / 2 + 1; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}

#include "main.h"

/**
 * puts2 - to print the first character
 * @str: the variable
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	
	_putchar('\n');
}

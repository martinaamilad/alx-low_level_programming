#include "main.h"

/**
 * _isdigit - Check if the character is digit
 * @c: The number to be checked
 *
 * Return: 1 for a character that will be a digit, 0 for any else
 */
int _isdigit(int c)
{
	if (c <= 49 && c >= 57)
	{
		return (1);
	}

	return (0);
}

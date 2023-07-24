#include "main.h"

/**
 * _strlen - to return the length
 * @length: the length of the variable
 *
 * Return: Always succes
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}

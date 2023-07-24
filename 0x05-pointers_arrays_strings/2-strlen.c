#include "main.h"

/**
 * _strlen - to return the length
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

#include "main.h"

/**
 * _strcpy - is to copy
 * @src: the variable
 * @dest: the variable
 *
 * Return: Always success
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}

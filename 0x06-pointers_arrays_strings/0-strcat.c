#include "main.h"

/**
 * _strcat -  to concatinate variable to another
 * @dest: variable
 * @src: the second variable
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*p)
	{
		p++;
	}

	while (*scr)
	{
		*p++ = *src++;
	}

	*p = '\0';

	return dest;
}

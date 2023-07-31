#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: segment to return bytes from
 * @accept: the bytes to include
 *
 * Return: the number of bytes in the initial segment of @s which consist only
 * of bytes from @accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;

	for (i = 0; s[i] && _strchr(accept, s[i]); i++)
	{
	}

	return (i);
}

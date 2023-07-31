#include "main.h"

/**
 * _memset - to fill the memory with new value
 * @*s: pointer 
 * @b: the value
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned char *p = (unsigned char *)s;

	while (n--)
	{
		*p++ = (unsigned char)c;
	}

	return s;
}

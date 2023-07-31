#include "main.h"
#include <string.h>

/**
 * _memset - fill a block of memory with a specific value
 * @*s: pointer
 * @n: number of bytes to be changed
 * @b: the value
 *
 * Return: changed array with the vew value
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

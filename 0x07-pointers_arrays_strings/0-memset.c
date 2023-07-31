#include "main.h"

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
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

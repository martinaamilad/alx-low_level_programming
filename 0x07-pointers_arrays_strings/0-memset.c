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
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

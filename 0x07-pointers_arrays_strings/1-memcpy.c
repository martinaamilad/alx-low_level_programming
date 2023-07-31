#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copes memories area
 * @dest: the destination memory
 * @src: the source memory
 * @n: number of bytes
 *
 * Return: ccopies memory with n byte changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int *d = (unsigned int *)dest;
	unsigned int *s = (unsigned int *)src;

	while (n--)
	{
		*d++ = *s++;
	}
	return dest;
}

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
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (*dest);
}

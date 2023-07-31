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
	int r = 0;
	int i = r;

	for (; r < i; r++)
	{
		dest[i]= src[i];
		n--;
	}
	return (dest);
}

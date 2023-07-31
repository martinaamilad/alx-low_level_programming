#include "main.h"

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
	int r;
	int i = n;

	for (r = 0; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}

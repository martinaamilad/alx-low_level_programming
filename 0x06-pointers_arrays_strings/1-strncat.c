#include "main.h"

/**
 * _strncat - to concatinate two strings
 * @dest: input value
 * @src: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int k;
	int n;

	k = 0;
	while (dest [k] != '\0')
	{
		k++;
	}
	n = 0;
	while (src[n] != '\0')
	{
		dest[k] = src[n];
		k++;
		n++;
	}

	dest[k] = '\0';
	return (dest);
}

#include "main.h"

/**
 * *_strcat -  to concatinate variable to another
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int k;
	int n;

	k = 0;
	while (dest[k] != '\0')
	{
		k++;
	}
	n = 0;
	while (src[n] != '\0')
	{
		dest[n] = src[n];
		k++;
		n++;
	}

	dest[k] = '\0';
	return (dest);
}

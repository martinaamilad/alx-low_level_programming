#include "main.h"

/**
 * _strcat -  to concatinate variable to another
 * @dest: variable
 * @src: the second variable
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = strlen(dest);
	int src_len = strlen(src);
	char *dest_ptr = dest + dest_len;

	int i;

	for (i = 0; i < scr_len; i++)
	{
		*dest_ptr++ = src[i];
	}

	*dest_ptr = '\0';

	return (dest);
}

#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of chars, and initialize with specific char
 * @size: size of array
 * @c: specific char
 * Return: char pointer to malloc created memory address or NULL if error
 */
char *_strdup(char *str)
{
	char *a;
	int i, c;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++);

	a = malloc(i * sizeof(*a) + 1);
	if (a == NULL)
	{
		return (NULL);
	}

	for (c = 0; c < i; c++)
	{
		a[c] = str[c];
		a[c] = '\0';
	}
	return (a);
}

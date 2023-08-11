#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * 
 *
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	//check if either string is NULL
	if (s1 == NULL)
	{
		s1 == "";
	}
	if (s2 == NULL)
	{
		s2 == "";
	}

	int len1 = strlen(s1);

	if (n >= strlen(s2))
	{
		n = strlen(s2);
	}

	char *new_str = malloc(len1 + n + 1);

	memcpy(new_str, s1, len1);

	memcpy(new_str + len1, s2, n);

	new_str[len1 + n] = '\0';

	return (new_str);
}

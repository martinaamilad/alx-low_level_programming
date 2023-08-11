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
	int len2 = n >= strlen(s2) ? strlen(s2) : n;
       
	char *new_str = malloc(len1 + len2 + 1);
	for (int i = 0; i < len1 + len2 + 1; i++)
	{
		new_str[i] = '\0';
	}
	
	for (int i = 0; i < len1; i++)
	{
		new_str[i] = s1[i];
	}
	
	for (int i = 0; i < len2; i++)
	{
		new_str[len1 + i] = s2[i];
	}
	
	return (new_str);
}

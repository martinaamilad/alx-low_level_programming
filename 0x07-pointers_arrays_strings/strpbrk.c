#include "main.h"

/**
 *
 *
 *
 */
char *_strpbrk(char *s, char *accept)
{
	if (s == NULL || accept == NULL)
	{
		return (NULL);
	}
	
	const char *temp;
	while (*s != '\0')
	{
		temp = accept;
		while (*temp != '\0')
		{
			if (*s == *temp)
			{
				return (char *)s;
			}
			tepm++;
		}
		s++;
	}
	return (NULL);
}

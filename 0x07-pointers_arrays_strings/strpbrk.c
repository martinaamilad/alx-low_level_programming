#include "main.h"

/**
 *
 *
 *
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		const char *str = accept; 
		while (*str != '\0')
		{
			if (*s == *str)
			{
				return (char*)s;
			}
			str++;
		}
		s++;
	}
	return (NULL);
}

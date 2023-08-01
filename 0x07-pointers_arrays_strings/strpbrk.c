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
		const char* curr = accept;
		while (*curr != '\0')
		{
			if (*str == *curr)
			{
				return (char*)s;
			}
			curr++;
		}
		str++;
	}
	return NULL;
}

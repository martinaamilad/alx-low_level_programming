#include "main.h"

/**
 *
 *
 *
 */
char *_strpbrk(char *s, char *accept)
{
	const char *i;
	const char *j;

	for (i = s; *i; i++)
	{
		for (j = accept; *j; j++)
		{
			if (*i == *j)
			{
				return (char*)i;
			}
		}
	}
	
	return (NULL);

}

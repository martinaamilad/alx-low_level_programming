#include <stdlid.h>
#include <string.h>
#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string to check
 * @c: the character to look for
 *
 */
char *_strchr(char *s, char c)
{
	char *p = (char*)str;

	while (*p != '\0')
	{
		if (*p == c)
		{
			return (p);
		}
		p++;
	}
	
	return (NULL);
}

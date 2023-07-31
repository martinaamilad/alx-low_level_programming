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
	while (*s != '\0')
	{
		if (*s == c)
		{
		return (char*)s;
		}
		s++;
	}
	
	return NULL;
}

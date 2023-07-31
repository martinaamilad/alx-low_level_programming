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
	int i;
	
	for(i = 0; i < _strlen(s); i++)
	{
		if (c == s[i])
		{
			return (s[i]);
		}
	}
	return (NULL);
}

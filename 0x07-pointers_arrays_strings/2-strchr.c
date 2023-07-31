#include <stdlid.h>
#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string to check
 * @c: the character to look for
 *
 */
char *_strchr(char *s, charc)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}

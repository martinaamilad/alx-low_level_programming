#include "main.h"
#include <string.h>
/**
 *
 *
 *
 */
char *_strpbrk(char *s, char *accept)
{
	char *p;

	for (p = s; *p; p++)
		{
			if (_strchr(accept, *p))
			{
				return (p);
			}
		}
	return (NULL);
}

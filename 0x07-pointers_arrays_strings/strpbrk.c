#include "main.h"

/**
 *
 *
 *
 */
char *_strpbrk(char *s, char *accept)
{
       	char* a = accept;
	while(*a != '\0')
	{
		char* s1 = s;
		char* a1 = a;
		
		while(*s1 != '\0' && *a1 != '\0' && *s1 == *a1)
		{
			s1++;
			a1++;
		}
		
		if(*s1 == '\0')
		{
			return a;
		}
		
		a++;
	}
	return NULL
}

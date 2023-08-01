#include "main.h"
/**
 * _strpbrk - searchs a string for any of a set of bytes
 *
 * @s: the string to search
 * @accept: the bytes to search for
 *
 * Return: a pointer to the byte in @s that matches one of the bytes in
 * @accept, or NULL if no such byte is found.
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

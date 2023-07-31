#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: segment to return bytes from
 * @accept: the bytes to include
 *
 * Return: the number of bytes in the initial segment of @s which consist only
 * of bytes from @accept
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int i;
    int found;

    i = 0;
    while (s[i])
    {
        found = 0;
        for (const char *p = accept; *p; p++)
        {
            if (s[i] == *p)
            {
                found = 1;
                break;
            }
        }
        if (!found)
        {
            break;
        }
        i++;
    }

    return i;
}
	

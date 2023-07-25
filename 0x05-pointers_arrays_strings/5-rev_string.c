#include "main.h"
#include <string.h>

/**
 * rev_string - to reverse string
 * @s: the variable
 * @temp: a variable
 *
 * Retuen: void
 */
void rev_string(char *s)
{
	int i, j;

	for (i = 0, j = strlen(s) - 1; i < j; i++; j--)
	{
		char temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}

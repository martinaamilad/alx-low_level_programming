#include "main.h"
#include <string.h>

/**
 * rev_string - to reverse string
 * @s: the variable
 *
 * Retuen: void
 */
void rev_string(char *s)
{
	int len = strlen(s);
	char temp;

	for (int i = 0, j = len - 1; i < j; i++; j--)
	{
		tem = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}

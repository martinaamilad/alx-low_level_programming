#include "main.h"
#include <stdio.h>

/**
 * print_array - to print the element inside yhe array
 * @a: the variable
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}

	printf("\n");
}

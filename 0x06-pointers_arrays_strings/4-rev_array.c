#include "main.h"

/**
 * reverse_array - reverse an array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int k;
	int j;

	for (k = 0; k < n--; k++)
	{
		j = a[k];
		a[k] = a[n];
		a[n] = j;
	}
}

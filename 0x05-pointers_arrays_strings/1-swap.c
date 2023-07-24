#include "main.h"

/**
 * swap_int - to swap the value of two integeres
 * @a: the first variable
 * @b: the second variable
 *
 * Return: Always sucess
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

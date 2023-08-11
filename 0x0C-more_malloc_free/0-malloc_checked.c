#include "main.h"
#include <stdlib.h>

/**
 *
 *
 *
 */
void *malloc_checked(unsigned int b)
{
	ptr = (int b*) malloc(b * sizeof(int));

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}

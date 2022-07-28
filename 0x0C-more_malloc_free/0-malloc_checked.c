#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked -> uses malloc to allocate memory.
 * @b: the number of bytes to be allocated.
 *
 * Return: A pointer to the allocated memory.
 */
void *malloc_checkout(unsigned int b);
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}

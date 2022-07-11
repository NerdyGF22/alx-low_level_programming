#include "main.h"
#include <string.h>

/**
 * print_array -> prints n elements of a array of integers
 * @a: array of integers
 * @n: number of array elements to be printed
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);

		if (j != (n - 1))
		{
			printf(", ");
		}
	}

	printf('\n');
}

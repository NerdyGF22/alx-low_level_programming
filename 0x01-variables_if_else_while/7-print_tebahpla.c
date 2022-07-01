# include <stdio.h>
# include <stdlib.h>
# include <time.h>

/**
 * main -> a program that prints the lowercase alphabet in reverse,
 * followed by a new line
 *
 * Return : always 0
 */

int main(void) /* main is an entry that prints lowercase alphabets reversed */
{
	int i = 122;

	while (i > 96)
	{

		putchar(i);
		i--;
	}
	putchar(10);

	return (0);
}

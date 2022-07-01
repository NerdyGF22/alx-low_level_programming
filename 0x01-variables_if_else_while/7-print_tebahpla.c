# include <stdio.h>
# include <stdlib.h>
# include <time.h>

/**
 *main - main entry
 * program that prints the lowercase in reverse
 * starts a new line
 * Return : always 0
 */
int main(void)
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

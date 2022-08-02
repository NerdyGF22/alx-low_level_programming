# include <stdio.h>

/**
 * main - program that prints all degits of base 10 from 0
 * only uses putchar and starts new line
 * Return: always 0
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(n);
		n++;
	}
	putchar('\n');

	return (0);
}

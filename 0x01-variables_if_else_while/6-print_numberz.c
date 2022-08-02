# include <stdio.h>

/**
 * main - program that prints all degits of base 10 from 0
 * only uses putchar and starts new line
 * Return: always 0
 */
int main(void)
{
	int ch;

	for (ch = 48; ch < 58; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}

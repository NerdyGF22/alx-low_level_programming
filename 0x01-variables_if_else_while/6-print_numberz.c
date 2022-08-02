# include <stdio.h>

/**
 * main - program that prints all degits of base 10 from 0
 * only uses putchar and starts new line
 * Return: always 0
 */
int main(void)
{
	char ch = '0';
	int i;

	for (i = 0; 1 < 10; i++)
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}

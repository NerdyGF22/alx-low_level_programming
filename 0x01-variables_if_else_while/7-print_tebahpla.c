# include <stdio.h>
# include <stdlib.h>
# include <time.h>

/**
 * main -> a program that prints the lowercase alphabet in reverse,
 * followed by a new line
 *
 * Return: always 0
 */

int main(void) /* main is an entry that prints lowercase alphabets reversed */
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar(10);

	return (0);
}

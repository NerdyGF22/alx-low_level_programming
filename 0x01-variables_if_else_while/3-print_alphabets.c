# include <stdio.h>

/**
 * main -> program that prints the alphabet in lowercase, and then in uppercase
 * followed by new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch = 97;
	int CH = 65;

	while (ch <= 122)
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 90)
	{
		putchar(CH);
		CH++;
	}
	putchar(10); /*this is an ascii code for a new line*/

	return (0);
}

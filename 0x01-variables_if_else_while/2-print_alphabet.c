#include <stdio.h>

/**
 * main ->  program that prints the alphabet in lowercase
 * followed by a new line using putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n'); /*this is a code for a new line*/

	return (0);
}

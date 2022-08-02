#include <stdio.h>

/**
 * main -> program that prints all numbers of base 10 starting from 0
 * starts new line
 * Return: always (0);
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%d\n", n);
		n++;
	}
	return (0);
}

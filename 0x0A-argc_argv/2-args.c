#include <stdio.h>

/**
 * main -> a function to print all arguments
 * @argc: argument count
 * @argv: an array of pointer to CLI argurment
 * Return: 0 for success
 */
in main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}

#include <stdio.h>

/**
 * main -> a function to print its name
 * @argc: argument count parameter
 * @argv: an array of a command listed
 * Return: 0 for success
 */
in main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

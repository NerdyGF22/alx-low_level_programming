#include <unistd.h>

/**
 * _putchar.c -> writes the character c to stdout
 * @c: the character to be printed
 *
 * Return: on success 1.
 * On error return -1 and set errno approprietly
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}

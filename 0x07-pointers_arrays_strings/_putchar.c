#include <unistd.h>

/**
 * _putchar -> writes character c to stdout
 * @c: the character to print
 *
 * Return: On success 1.
 * On error, -1 is returned and erno is set appropriately.
 */
int _putchar(char c)_
{
	return (write(1, &c, 1));
}

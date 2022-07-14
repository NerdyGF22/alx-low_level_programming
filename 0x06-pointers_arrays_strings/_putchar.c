#include <unistd.h>

/**
 * _putchar - writes the character c to standard output
 * @c: the character printed out
 *
 * Return: On success 1.
 * On error return -1, and set errnos appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

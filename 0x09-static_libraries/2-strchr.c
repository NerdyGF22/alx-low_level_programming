#include "main.h"
#include <stddef.h>

/**
 * _strchr - a string character
 * @s: the given string
 * @c: another character
 * Return: a string
 */
char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}

#include "main.h"

int bandersnatch(char *s1, char *s2);
char *move(char *s2);

/**
 * wildcmp - compares two strings recursively
 * checking for wildcard expansion
 * @s1: first string to compare
 * @s2: the second string yo compare
 *
 * Return: 1 if the string can be considred identical
 * otherwise return 0
 */
int wildcmp(char *s1, char *s2)
{
	/**
	 * this is going to be a sum of return values
	 */
	int sum = 0;

	/**
	 * if we reach the end of s1 and the char in s2 is a *
	 * and if the next characters of s2 are *, return 1
	 */
	if (*s1 == '\0' && *s2 == '*' && !*move(s2))
		return (1);

	/**
	 * if both strings have equal characters,
	 * if we reach the end of s1, return 1
	 * else increment s1 and s2 by 1
	 */
	if (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (1);
		return (wildcmp(s1 + 1, s2 + 1));
	}
	/**
	 * if we reach the end of both strings
	 * return 0
	 */
	if (*s1 == '\0' || *s2 == '\0')
		return (0);


	/**
	 * if the character in s2 is a *
	 * find the adress of the first character after the *
	 * if we reach the end of s2, return 1
	 * if the characters are equal, sum the return values
	 * of wildcmp() to sum
	 * add the return value of bandersnatch() to sum
	 * convert non-zero to 1, keeps 0 at 0, return
	 */
	if (*s2 == '*')
	{
		s2 = move(s2);
		if (*s2 == '\0')
			return (1);
		if (*s1 == *s2)
			sum += wildcmp(s1 + 1, s2 + 1);
		sum += bandersnatch(s1 + 1, s2);
		return (!!sum);
	}
	return (0);
}

/**
 * bandsnatch - checks recursively all the paths
 * when the chars are equal
 * @s1: first string
 * @s2: second string
 *
 * Return: value of wildcmp() or itself
 */
int bandsnatch(char *s1, char *s2)
{
	/**
	 * if we reach the end of s1, return 0
	 * if chars are equal, return the return value of wildcmp()
	 * increase s1 by 1, not s2
	 */
	if (*s1 == '\0')
		return (0);
	if (*s1 == *s2)
		return (wildcmp(s1, s2));
	return (bandersnatch(s1 + 1, s2));
}

/**
 * move -> moves the current character past the *
 * @s: string to iterate over
 *
 * Return: the address of the character after the *
 */
char *move(char *s2)
{
	/**
	 * if the current character is a *
	 * increment s2 by 1
	 * else return the address of
	 * the first character past all *
	 */
	if (*s2 == '*')
		return (move(s2 + 1));
	else
		return (s2);
}

#include "main.h"

/**
 * argstostr - concatenate all argurments
 * @ac: the number of arguments
 * @av: the pointer to the string arguments
 * Return: pointer to new string
 */
char *argstostr(int ac, char **av)
{
	char *cont;
	int i;
	int j;
	int len = 0;

	if (ac == o || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j++])
			len++;
	}
	len++;
	cont = malloc(sizeof(**av) * (len + ac));
	if (cont == NULL)
		return (NULL);
	len = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
			cont[len++] = av[i][j++];
		cont[len++] = '\n';
	}
	cont[len] = '\n';
	return (cont);
}

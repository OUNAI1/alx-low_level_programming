#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int iter, n, r = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (iter = 0; iter < ac; iter++)
	{
		for (n = 0; av[iter][n]; n++)
			l++;
	}
	l += ac;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (iter = 0; iter < ac; iter++)
	{
	for (n = 0; av[iter][n]; n++)
	{
		str[r] = av[iter][n];
		r++;
	}
	if (str[r] == '\0')
	{
		str[r++] = '\n';
	}
	}
	return (str);
}

#include "main.h"
/**
 * _strcmp - compare string values
 * @s1: input value
 * @s2: input value
 *
 * Return: s1[ii] - s2[ii]
 */
int _strcmp(char *s1, char *s2)
{
	int ii;

	ii = 0;
	while (s1[ii] != '\0' && s2[ii] != '\0')
	{
		if (s1[ii] != s2[ii])
		{
			return (s1[ii] - s2[ii]);
		}
	ii++;
	}
	return (0);
}


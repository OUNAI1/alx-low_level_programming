#include "stdio.h"
/**
 * _strspn -  function that gets the length of a prefix substring
 * @s: input
 * @accept: input
 *
 * Return: always 0.
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int var1 = 0, var2 = 0;

	while (s[var1] != '\0')
	{
	while (accept[var2] != s[var1])
	{
		var2++;
		if (accept[var2] == '\0')
		{
			return (var1);
		}
	}
	var1++;
	}
	return (var1);
}

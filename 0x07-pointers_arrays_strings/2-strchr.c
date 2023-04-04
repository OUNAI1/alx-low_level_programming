#include "main.h"
/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int var = 0;

	for (; s[var] >= '\0'; var++)
	{
		if (s[var] == c)
			return (&s[var]);
	}
	return (0);
}


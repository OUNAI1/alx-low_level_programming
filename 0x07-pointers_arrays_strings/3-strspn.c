#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int nano = 0;
	int recto;

	while (*s)
	{
		for (recto = 0; accept[recto]; recto++)
		{
			if (*s == accept[recto])
			{
				nano++;
				break;
			}
			else if (accept[recto + 1] == '\0')
				return (nano);
		}
		s++;
	}
	return (nano);
}


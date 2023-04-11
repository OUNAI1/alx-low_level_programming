#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int jo;

	jo = 0;
	while (jo < n && src[jo] != '\0')
	{
		dest[jo] = src[jo];
		jo++;
	}
	while (jo < n)
	{
		dest[jo] = '\0';
		jo++;
	}

	return (dest);
}


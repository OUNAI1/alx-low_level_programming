#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int lo = 0;
	int xx = 0;

	while (*(src + lo) != '\0')
	{
		lo++;
	}
	for ( ; xx < lo ; xx++)
	{
		dest[xx] = src[xx];
	}
	dest[lo] = '\0';
	return (dest);
}

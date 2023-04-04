#include "main.h"
/**
 * _memcpy -  function that copies memory area
 * @dest: memory area
 * @src: source
 * @n: length of src to be copied
 *
 * Return: the pointer to dest.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int variable;

for (variable = 0; variable < n; variable++)
{
dest[variable] = src[variable];
}
return (dest);
}

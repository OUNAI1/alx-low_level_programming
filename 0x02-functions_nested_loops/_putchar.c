#include <unistd.h>
#include "main.h"

/**
 * _putchar - write the charecter c to stdout
 * @c: the character to print
 * Return: on sucess 1.
 *	on error. -1 is returnd, and errno is set appropriatly.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

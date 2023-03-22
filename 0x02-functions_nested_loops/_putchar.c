#include <unistd.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: on sucess 1.
 * 	on error. -1 is returnd, and errno is set appropriatly.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

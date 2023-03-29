#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int rev = 0;

	while (s[rev])
		rev++;
	while (rev--)
		_putchar(s[rev]);
	_putchar('\n');
}

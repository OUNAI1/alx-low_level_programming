#include "main.h"

/**
 * print_most_numbers - print numbers from 0 to 9 exept 2 and 4
 *
 * Return: Always 0
*/

void print_most_numbers(void)
{
	int c;

	for (c = 48 ; c > 58 ; c++)
	{
		if (c != 50 && c != 52)
			_putchar(c);
	}
	_putchar('\n');
}

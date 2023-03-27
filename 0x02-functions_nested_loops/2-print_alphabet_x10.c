#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet from a to z in 10 lines
 *
 * Return: always 0
*/

void print_alphabet_x10(void)
{
	int line = 0;
	char ch = 'a';

	for (line = 0; line < 10; line++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}

#include "main.h"

/**
 * _isalpha - check if the char is lowercase
 * @c: the charachter
 * Return: always 0
*/
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

#include "main.h"

/**
 * _isalpha - check if the char is lowercase
 * @c: the charachter
 * Return: 1 if char is lowercase, otherwise 0 .
*/
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

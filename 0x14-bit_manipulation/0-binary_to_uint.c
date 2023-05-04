#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int cont;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (cont = 0; b[cont]; cont++)
	{
		if (b[cont] < '0' || b[cont] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[cont] - '0');
	}

	return (dec_val);
}

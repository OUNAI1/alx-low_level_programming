#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int itr, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (itr = 63; itr >= 0; itr--)
	{
		current = exclusive >> itr;
		if (current & 1)
			count++;
	}

	return (count);
}

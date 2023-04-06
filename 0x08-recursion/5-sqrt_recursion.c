#include "main.h"

int mainsqrt_recursion(int n, int iter);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (mainsqrt_recursion(n, 0));
}
/**
 * mainsqrt_recursion - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @iter: iterator
 *
 * Return: the resulting square root
 */
int mainsqrt_recursion(int n, int iter)
{
	if (iter * iter > n)
		return (-1);
	if (iter * iter == n)
		return (iter);
	return (mainsqrt_recursion(n, iter + 1));
}

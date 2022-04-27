#include "main.h"

/**
 * power_calculation - returns the natural square root of a number
 * @n: input integer
 * @c: iterator
 *
 * Return: square root or -1
 */
int power_calculation (int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
			return (c);
		else
			return (-1);
	}
	return (0 + power_calculation(n, c + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input integer
 *
 * Return: natural squarw root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);

	return (power_calculation(n, 2));
}

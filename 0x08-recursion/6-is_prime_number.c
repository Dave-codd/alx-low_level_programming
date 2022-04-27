#include "main.h"

/**
 * is_prime - checks if input number is prime number
 * @a: input number
 * @b: iterator
 *
 * Return: 1 if prime and 0 if not
 */
int is_prime(unsigned int a, unsigned int b)
{
	if (a % b == 0)
	{
		if (a == b)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(a, b + 1));
}

/**
 * is_prime_number - checks if input number is prime
 * @n: input number
 *
 * Return: 1 if prime and 0 if not
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);

	return (is_prime(n, 2));
}

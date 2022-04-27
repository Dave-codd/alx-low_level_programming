#include "main.h"

/**
 * factorial - prints the factorial of a given number
 * @n: input number
 *
 * Return: Always 0(Success)
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else if (n <= -1)
	{
		return (-1);
	}

	return (0);
}

#include "main.h"
/**
 * print_sign - Checks a number whether it is greater, less or
 * equal to 0
 * @n: number to be checked
 *
 * Return: 1 for greater than zero, 0 for equal to zero
 * and -1 for less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

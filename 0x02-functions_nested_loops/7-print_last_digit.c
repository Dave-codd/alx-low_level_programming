#include "main.h"
/**
 * print_last_digit - Prints last digit of a number
 * @n: number to take last digit
 *
 * Return: lsat digit number
 */
int print_last_digit(int n)
{
	int r;

	r = n % 10;
	if (n < 0)
	{
		r = r * -1;
	}
	_putchar(r);
	return (r);
}

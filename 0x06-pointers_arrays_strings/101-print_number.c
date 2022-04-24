#include "main.h"

/**
 * print_number - prints an integer
 * @n: input number
 */

void print_number(int n)
{
	int count, num, i;

	if (n < 0)
	{
		_putchar(45);
		num = n * -1;
	}
	else
	{
		num = n;
	}

	i = num;
	count = 1;

	while (n > 9)
	{
		i /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((m / count) % 10) + 48);
	}
}

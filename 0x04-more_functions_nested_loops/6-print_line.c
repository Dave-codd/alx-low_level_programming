#include "main.h"

/**
 * print_line - Prints horizontal line n times
 * @n: number of horizontal lines is printed
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

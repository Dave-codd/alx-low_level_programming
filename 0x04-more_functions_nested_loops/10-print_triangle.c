#include "main.h"

/**
 * print_triangle - prints triangle
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int i, j;

	for (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size - hash; j > 0; j--)
				_putchar(' ');
			for (j = 0; j < i; j++)
				_putchar(35);
			if (i == size)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}

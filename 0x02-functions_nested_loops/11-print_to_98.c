#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print numbers up to 98
 * @n: takes integer number
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i > 97; i--)
		{
			printf("%d", i);
			if (n != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (i = n; i < 99; i++)
		{
			printf("%d", i);
			if (n != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}

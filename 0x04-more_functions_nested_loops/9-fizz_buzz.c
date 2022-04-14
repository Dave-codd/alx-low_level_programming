#include <stdio.h>

/**
 * main - prints numbers 1-100 with "Fizz" on multiple of 3
 * "Buzz" on multiple of 5
 * "FizzBuzz" on mulitple of 3 and 5
 *
 * Return: Always 0
 */

int main(void)
{
	int i;

	printf("1");

	for (i = 2; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (i % 5 == 0)
		{
			printf(" Buzz");
		}
		else if (i % 3 == 0)
		{
			printf(" Fizz");
		}
		else
		{
			printf(" %d", i);
		}
	}
	return (0);
}

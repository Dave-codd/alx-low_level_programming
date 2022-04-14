#include <stdio.h>
/**
 * main - prints largest prime factor
 * Return: Always 0.
 **/
int main(void)
{
	long int n, fact;

	n = 612852475143;
	for (fact = 2; fact <= n; fact++)
	{
		if (n % fact == 0)
		{
			n /= fact;
			fact--;
		}
	}
	printf("%ld", fact);
	printf("\n");
	return (0);
}

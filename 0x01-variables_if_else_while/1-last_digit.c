#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
 * main - Entry point
 *
 * Documentation: Generates a random number and assigns it to n.
 * then gets last digit of n and assign it to last.
 * then checks if last is greater than 5, it is 0 or less than 6
 * and prints the output.
 * Return: Always 0(Success)
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if (last > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	} else if (last == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last);
	} else
	{
		printf("Last digit 0f %d is %d and is less than 6 and not 0\n", n, last);
	}
	return (0);
}

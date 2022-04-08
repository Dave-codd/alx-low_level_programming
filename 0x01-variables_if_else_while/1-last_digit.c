#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
 * main - Entry point
 *
 * Documentation: Generates a random number and assigns it to n.
 * then gets last digit of n and assign it to last_digit.
 * then checks if last_digit is greater than 5, it is 0 or less than 6
 * and prints the output.
 * Return: Always 0(Success)
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	if (last_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	} else if (last_digit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	} else
	{
		printf("Last digit 0f %d is %d and is less than 6 and not 0\n", n, last_digit);
	}
	return (0);
}

#include "3-calc.h"

/**
 * op_add - adds two integer numbers
 * @a: first integer
 * @b: second integer
 *
 * Return: Summation
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts two integer numbers
 * @a: first integer
 * @b: second integer
 *
 * Return: Subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two numbers
 * @a: first integer
 * @b: second integer
 *
 * Return: MUlitplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integer
 * @a: first interger
 * @b: second integer
 *
 * Return: Division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - Calculates modules of two numbers
 * @a: first integer
 * @b: second integer
 *
 * Return: remaninder of two numbers
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}

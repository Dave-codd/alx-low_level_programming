#include "main.h"
/**
 * _abs - Finds the absolute value of a number
 * @int: number to be checked type int
 *
 * Return: positive numbers
 */
int _abs(int)
{
	int k;
	int n;

	if (k < 0)
	{
		n = -1 * k;
		return (n);
	}
	else if (k > 0)
	{
		return (k);
	}
	else
	{
		return (0);
	}
}

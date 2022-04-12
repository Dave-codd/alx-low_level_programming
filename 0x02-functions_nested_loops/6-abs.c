#include "main.h"
/**
 * _abs - Finds the absolute value of a number
 * @k: number to be checked type int
 *
 * Return: positive numbers
 */
int _abs(int k)
{
	int k;

	if (k < 0)
	{
		k = k * -1;
		return (k);
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

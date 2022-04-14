#include "main.h"

/**
 * _isdigit - Checks for number
 * @c: value to be checked
 *
 * Return: 1 for number and 0 for other
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

#include "main.h"
/**
 * _isalpha - Checks c whether it is alphabeticall or not
 * @c: character to be checked
 *
 * Return: 1 if is alphabetic character and 0 if not
 */
int _isalpha(int c)
{
	int a, b, d;

	if (c >= 48 && c <= 57)
	{
		a = 1;
	}
	else if (c >= 65 && c <= 90)
	{
		b = 1;
	} else if (c >= 97 && c <= 122)
	{
		d = 1;
	} else
	{
		a = 0;
		b = 0;
		d = 0;
	}
	if (a == 1 && b == 1 && d == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


#include "main.h"
/**
 * _isalpha - Checks c whether it is alphabeticall character or not
 * @c: character to be checked
 *
 * Return: 1 if is alphabetic character and 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

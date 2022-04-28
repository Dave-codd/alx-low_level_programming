#include "main.h"

/**
 * _strlen_recursion - returns length of the string
 * @s: input string
 *
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * comparator - compares each character of string
 * @s: input string
 * @n1: smallest iterator
 * @n2: biggest iterator
 *
 * Return: Always 0(Sucess)
 */
int comparator(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + comparator(s, n1 + 1, n2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - checks whether a sting is palindrome or not
 * @s: input string
 *
 * Return: 1 if palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	else
		return (comparator(s, 0, _strlen_recursion(s) - 1));
}

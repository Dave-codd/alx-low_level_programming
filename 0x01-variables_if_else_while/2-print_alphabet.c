#include<stdio.h>
/**
 * main - Entry point
 *
 * Documentation: main function does print all alphabet
 * letters in lower case using putchar().
 * Return: Always 0(Sucess)
 */
int main(void)
{
	int ltr = 'a';

	while (ltr <= 'z')
	{
		putchar(ltr);
		ltr++;
	}
	putchar('\n');
	return (0);
}

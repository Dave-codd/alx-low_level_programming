#include<stdio.h>
/**
 * main - Entry point
 *
 * Documentation: prints all hexadecimal in lowercase
 * Return: Always 0(Success)
 */
int main(void)
{
	char ltr = 'a';
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	while (ltr <= 'f')
	{
		putchar(ltr);
		ltr++;
	}
	putchar('\n');
	return (0);
}

#include<stdio.h>
/**
 * main - Entry point
 *
 * Documentation: prints numbers 0 upto 9
 * Return: Always 0(Sucess)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

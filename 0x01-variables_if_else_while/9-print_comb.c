#include<stdio.h>
/**
 * main - Entry point
 *
 * Documentation: prints all combination of single digits.
 * Return: Always 0(Sucess)
 */
int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
		if ( i != 58) 
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

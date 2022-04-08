#include<stdio.h>
/**
 * main - Entry point
 *
 * Documentation: prints combinations of three digits
 * Return: Always 0(Success)
 */
int main(void)
{
	int i, j, k;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			for (k = 48; j < 58; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i != 55 && j != 56)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

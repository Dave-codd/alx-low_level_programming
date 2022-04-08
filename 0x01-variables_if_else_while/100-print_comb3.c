#include<stdio.h>
/**
 * main - Entry point
 *
 * Documenration: prints combinations of two digit numbbers
 * Return: Always 0(Sucess)
 */
int main(void)
{
	int i = 48;
	int j = 48;

	while (j < 58)
	{
		i = 48;
		while (i < 58)
		{
			if (j != i && j < i)
			{
				putchar(j);
				putchar(i);
				if (i == 57 && j == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			i++;
		}
		j++;
	}
	putchar('\n');
	return (0);
}

#include<stdio.h>
/**
 * main - Entry point
 *
 * Documentation: prints numbers from 0 upto 9
 * Return: Always 0(Sucess)
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	putchar('\n');
	return (0);
}

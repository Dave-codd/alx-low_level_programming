#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the multiplication of two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0(Sucess)
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}

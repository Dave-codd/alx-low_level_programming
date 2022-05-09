#include "main.h"

/**
<<<<<<< HEAD
 *  main - multiplies two positive numbers
=======
 * _is_zero - determines if any number is zero
 * @argv: argument vector.
 *
 * Return: no return.
 */
void _is_zero(char *argv[])
{
	int i, isn1 = 1, isn2 = 1;

	for (i = 0; argv[1][i]; i++)
		if (argv[1][i] != '0')
		{
			isn1 = 0;
			break;
		}

	for (i = 0; argv[2][i]; i++)
		if (argv[2][i] != '0')
		{
			isn2 = 0;
			break;
		}

	if (isn1 == 1 || isn2 == 1)
	{
		printf("0\n");
		exit(0);
	}
}

/**
 * _initialize_array - set memery to zero in a new array
 * @ar: char array.
 * @lar: length of the char array.
>>>>>>> refs/remotes/origin/master
 *
 *   * @argc: n arguments
 *
 *    * @argv: args
 *
 *     * Return: int
 *
 *      */

int main(int argc, char *argv[])

{

	unsigned long mul;

	int i, j;

		if (argc != 3)

				{ printf("Error\n");

						exit(98); }

			for (i = 1; i < argc; i++)

					{

								for (j = 0; argv[i][j] != '\0'; j++)

											{

															if (argv[i][j] > 57 || argv[i][j] < 48)

																			{  printf("Error\n");

																							exit(98); }

																	}



									}

				mul = atol(argv[1]) *atol(argv[2]);

					printf("%lu\n", mul);

					return (0);

}

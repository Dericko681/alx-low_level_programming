#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int total = 0;
	int k;
	int v;

	for (k = 1; k < argc; k++)
	{
		char *arg = argv[k];
		int num = 0;

		for (v = 0; arg[v] != '\0'; v++)
		{
			if (arg[v] < '0' || arg[v] > '9')
			{
				printf("Error\n");
				return (1);
			}
			num = num * 10 + (arg[v] - '0');
		}

		if (num > 0)
		{
			total += num;
		}
	}
	printf("%d\n", total);
	return (0);
}


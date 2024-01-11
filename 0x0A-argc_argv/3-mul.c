#include <stdio.h>
#include "main.h"

/**
 * atoi - converts a string to an integer
 * @str: string to be converted
 *
 * Return: the int converted from the string
 */
int atoi(char *str)
{
	int result, sign, i;

	result = 0;
	sign = 1;
	i = 0;

	while (str[i] == ' ')
	{
		i++;
	}

	if (str[i] == '-' || str[i] == '+')
	{
		sign = (str[i++] == '-') ? -1 : 1;
	}

	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i++] - '0');
	}

	return (sign * result);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = num1 * num2;
	printf("%d\n", result);

	return (0);
}


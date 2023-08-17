#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */
void print_number(int n)
{
	unsigned int number2;

	if (n < 0)
	{
		number2 = -n;
		_putchar('-');
	}
	else
		number2 = n;

	if (number2 / 10)
		print_number(number2 / 10);

	_putchar((number2 % 10 + '0'));
}

#include "main.h"
/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	char *p = &a[0][0];
	int i;

	for (i = 0; i < 64; i++, p++)
	{
		_putchar(*p);
		if ((i + 1) % 8 == 0)
			_putchar('\n');
	}
}

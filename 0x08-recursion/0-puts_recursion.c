#include "main.h"
/**
 * _puts_recursion - function like puts();
 * @s: input(pointer of type char)
 * Return: Void function always return 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}


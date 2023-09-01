#include "main.h"

/**
 * _islower - lowercase letters
 * @c: char to check
 *
 * Return: 0 or 1
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}


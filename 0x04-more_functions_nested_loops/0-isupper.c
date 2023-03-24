#include "main.h"

/**
 * _isupper - check for uppercase
 * @c: is int
 *
 * Return: 0, 1
 */

int _isupper(int c)
{
	if (c >= 65 && c < 91)
	{
		return (1);
	}

	else
		return (0);
}

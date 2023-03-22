#include "main.h"

/**
 * _abs - get the absolute value
 * @n: n is an integer
 * 
 * Return: integer
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}

	else if (n == 0)
	{
		return (0);
	}

	else
	{
		return (n);
	}
}

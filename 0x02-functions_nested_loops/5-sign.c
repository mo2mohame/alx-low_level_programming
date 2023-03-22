#include "main.h"

/**
 * print_sign - print the sign nymber
 * @n: n is an integer
 *
 * Return: 1, 0, -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		printf("+");
		return (1);
	}
	else if (n == 0)
	{
		printf("0");
		return (0);
	}
	else
	{
		printf("-");
		return (-1);
	}
}

#include "main.h"

/**
 * _isalpha - check if contain letter
 * @c: is an asci char
 *
 * Return: 1
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

#include "main.h"

/**
 * main - check the code
 *
 * Description: dsgds
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	int letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
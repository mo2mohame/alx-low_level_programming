#include <stdio.h>
#include <unistd.h>

/**
 * main - print quote
 *
 * Description: quote
 *
 * Return: 1 (Success)
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 55);
	return (1);
}
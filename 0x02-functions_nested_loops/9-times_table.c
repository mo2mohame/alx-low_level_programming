#include "main.h"

/**
 * times_table - edgfj
 *
 * Description: dsgsdfg
 *
 * Return: void
 */

void times_table(void)
{
	int r, c, p, t, o;

	for (r = 0; r <= 9; r++)
	{
		for (c = 0; c <= 9; c++)
		{
			p = r * c;
			t = p / 10;
			o = p % 10;

			if (p == 0)
			{
				_putchar('0');
			}

			else if (p < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(o + '0');
			}

			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(tens + '0');
				_putchar(ones + '0');
			}
		}
		_putchar('\n');
	}
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - postive or nigative
 *
 * Description: program will charge random number
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is popstive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is nigative\n", n);
	
	return (0);
}

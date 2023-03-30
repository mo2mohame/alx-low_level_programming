#include "main.h"

/**
 * _strcat - mmm
 * @dest: dsg
 * @src: sfdg
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int n = 0;
	
	while (dest[n] != '\0')
	{
		n++;
	}

	for (i = 0; i < n && src[n] != '\0')
		dest[n +i] = src[i];

	dest[n + i] = '\0';
	return (dest);
}

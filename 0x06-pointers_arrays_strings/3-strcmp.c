#include "main.h"

/**
 * _strcmp - mldng
 * @s1: gs
 * @s2: sfdgfs
 *
 * Return: sdg
 */

int _strcmp(char *s1, char *s2)
{
	int flag=0;
	int i=0;

	while(s1[i] != '\0' && s2[i] != '\0')
    	{
		if(s1[i] != s2[i])
		{
			flag=1;
			break;
		}
		i++;
	}
	if(flag==0)
		return 0;
	else
		return 1;
}

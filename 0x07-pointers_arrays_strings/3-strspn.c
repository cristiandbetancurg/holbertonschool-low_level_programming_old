#include "holberton.h"

/**
 * _strspn - length of a substring
 * @s: pointer string
 * @accept: Pointer to be able to accept the chain
 * Return: Length to accept the string
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, r;

	for (i = 0; s[i] != '\0'; i++)
	{
		r = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				r = 1;
				break;
			}
		}
		if (r != 1)
			break;
	}
	return (i);
}

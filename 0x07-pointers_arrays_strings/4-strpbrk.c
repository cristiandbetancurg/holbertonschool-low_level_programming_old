#include "holberton.h"

/**
 * _strpbrk - searches a string of a set of many bytes
 * @s: pointer to a string
 * @accept: Pointer to a accept string
 * Return: Pointer to a match return
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;
	char *p;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				p = &s[i];
				return (p);
			}
		}
	}
	p = '\0';
	return (p);
}

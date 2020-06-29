#include "holberton.h"

/**
 * _memcpy - function Copy memory Area
 * @dest: pointer to destination memory
 * @src: pointer to src memory
 * @n: n bytes to copy
 * Return: Pointer dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

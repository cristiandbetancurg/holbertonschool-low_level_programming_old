#include "holberton.h"
/**
 * _memcpy copy memory area
 * @dest: The *Pointer to detination memory
 * @src: The *Pointer to source all memory
 * @n: First n bytes to Copy
 * Return: Pointer dest'
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

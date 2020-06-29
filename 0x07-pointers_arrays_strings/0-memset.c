#include "holberton.h"

/**
 * @s: THE pointer to memory "s" to be full
 * @b: Constant to fill all memory
 * @n: first n bytes to fill
 * memset --- Fill the constant memorandum here
 * Return: Pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

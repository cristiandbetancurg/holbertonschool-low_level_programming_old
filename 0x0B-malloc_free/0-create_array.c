#include "holberton.h"
#include  <stdlib.h>
/**
 * create_array - creates an array, initializes it with char
 * @size: unsigned int
 * @b: char
 * Return: char
*/
char *create_array(unsigned int size, char b)
{
	unsigned int i;
	char *ar;

	if (size == 0)
		return (NULL);
	ar = malloc(size * sizeof(char));
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ar[i] = b;
	return (ar);
}

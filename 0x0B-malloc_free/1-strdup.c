#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - copy string now
 * @str: string to copy
 * Return: char
*/
char *_strdup(char *str)
{
	int i = 0, j;
	char *a;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	i = i + 1;
	a = malloc(i * sizeof(char));
	if (a == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
		c[j] = str[j];
	return (a);
}

#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - copy of the string a string
 * @str: string to the copy
 * Return: char
*/
char *_strdup(char *str)
{
	int i = 0, j;
	char *c;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	i = i + 1;
	c = malloc(i * sizeof(char));
	if (c == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
		c[j] = str[j];
	return (c);
}

#include "holberton.h"
/**
 * get_endianness - checks the endianness
 * Return: zero -0 if big one-1 if little
*/
int get_endianness(void)
{
	unsigned int check = 1;
	char *c;

	c = (char *) &check;
	if (*c)
		return (1);
	else
		return (0);
}

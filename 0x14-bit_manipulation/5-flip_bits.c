#include "holberton.h"
/**
 * flip_bits - returns the number of bits need to flip
 * @n: the first the number
 * @m: the second the numbers
 * Return: number bits edited
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int a = 0;
	unsigned long int b;

	b = n ^ m;
	while (b)
	{
		a = a + (b & 1);
		b = b >> 1;
	}
	return (a);
}

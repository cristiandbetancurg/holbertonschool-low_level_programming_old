#include "holberton.h"
/**
*main - check the code for Holberton School students.
*print most numbers  prints numbers except 2 - 4
*
*Return: Always 0 (Success)
*/
void print_most_numbers(void)
{
int n;

for (n = 0; n <= 9; n++)
{
	if (n != 2 && n != 4)
	_putchar(n + '0');
}
_putchar('\n');
}

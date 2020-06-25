#include "holberton.h"
/**
 * print_triangle - print a triangle
 * @size: square dimensions
 *
 */
void print_triangle(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		a = 0;
		while (a < size)
		{
			b = 0;
			while (b < size)
			{
				if (a < size - b - 1)
					_putchar(32);
				else
					_putchar(35);
				b++;
			}
			a++;
			_putchar(10);
		}
	}
}

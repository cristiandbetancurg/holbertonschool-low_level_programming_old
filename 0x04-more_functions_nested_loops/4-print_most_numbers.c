#include "holberton.h"
/**
 *
 *print most numbers prints the numbers  0 to 9  except 2 - 4
 *Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		if (i != 2 && i != 4)
		{
			_putchar('0' + i);
		}
		i++;
	}
	_putchar('\n');
}

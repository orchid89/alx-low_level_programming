#include "main.h"

/**
 * print_square - function print a square
 * @size: size of square
 *description: only use _putchar to print. use '#' to print square.
 */

void print_square(int size)
{
	int x, y;

	y = 0;
		if (size < 1)
			_putchar('\n');

	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			x = 0;
			while (x < size)
			{
				_putchar('#');
				x++;
			}
			_putchar('\n');
			y++;
		}
	}
}

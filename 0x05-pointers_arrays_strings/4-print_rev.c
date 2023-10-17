#include <stdio.h>

/**
 * print_rev - Prints a string in reverse followed by a new line
 * @s: Pointer to the string to be printed in reverse
 * Return: void
 */
void print_rev(char *s)
{
	int c = 0;
	
	while (s[c] != '\0')

	{
        c++;
	}
	
	for (c -= 1; c >= 0; c--)
	{
		putchar(s[c]);
	}

	putchar('\n');
}

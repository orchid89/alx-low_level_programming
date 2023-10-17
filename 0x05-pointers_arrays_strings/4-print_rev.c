#include <stdio.h>

/**
 * print_rev - Prints a string in reverse followed by a new line.
 * @s: The string to be printed in reverse.
 */
void print_rev(char *s)
{
    if (s == NULL)
        return;

    int size = 0;

    /* Calculate the length of the string */
    while (s[size] != '\0')
        size++;

    /* Print the characters in reverse order */
    for (int i = size - 1; i >= 0; i--)
    {
        printf("%c", s[i]);
    }

    printf("\n");
}

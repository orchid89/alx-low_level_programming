#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{	
printf("Size of char: %lu byte(s)\n", sizeof(char));
printf("Size of int: %4u byte(s)\n", sizeof(int));
printf("Size of long int: %8u byte(s)\n", sizeof(long int));
printf("Size of long long int: %8u byte(s)\n", sizeof(long long int));
printf("Size of float: %4u byte(s)\n", sizeof(float));
return (0);
}

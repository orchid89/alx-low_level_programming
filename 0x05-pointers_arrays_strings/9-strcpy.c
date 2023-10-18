#include "main.h"

/**
 * *_strcpy - copies the string pointed by src
 * @dest: char type string
 * @src: copy string pointed by src to
 * the buffer pointed to by 'dest'
 * Return: pointer to 'dest
 */

char *_strcpy(char *dest, char *src)
{
	int z = -1;

	do {
		z++;
		dest[z] = src[z];
	} while (src[z] != '\0');
	return (dest);
}

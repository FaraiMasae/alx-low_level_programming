#include "main.h"

/**
 * _memcpy - copies n byte from memory
 * @dest: memory area
 * @src: memory source area
 * @n: number of function copies
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

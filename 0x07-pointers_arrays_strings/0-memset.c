#include "main.h"

/**
 * _memset - entry point function
 * @s: memory to be filled
 * @b: char to copy
 * @n: number of times copy b char
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

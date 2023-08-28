#include "main.h"

/**
 * _strchr - function locating a char
 * @s: string being searched for
 * @c: char being located
 * Return: s or null point
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}

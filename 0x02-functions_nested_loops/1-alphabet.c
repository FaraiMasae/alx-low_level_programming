#include "main.h"

/**
 * print_alphabet - for printing the alphabet
 * Description: printing alphabet in lowercase
 * Return: void
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	_putchar(ch);
	_putchar('\n');
}
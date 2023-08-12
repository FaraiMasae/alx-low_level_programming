#include <stdio.h>
/**
 * main - entry point
 * Description: numbers again
 * Return: always zero (a win)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}

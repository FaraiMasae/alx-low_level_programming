#include <stdio.h>
/**
 * main - Entrypoint
 * Description: putschar coding
 * Return: always zero (success)
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
		putchar('\n');
	return (0);
}

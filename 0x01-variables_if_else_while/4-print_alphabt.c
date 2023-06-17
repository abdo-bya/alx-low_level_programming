#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Get the last digit of a number
 *
 * Return: Always 0 (indicating successful program execution)
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 101 || n == 113)
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}

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
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

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

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}

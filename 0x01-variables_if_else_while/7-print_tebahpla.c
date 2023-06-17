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
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}

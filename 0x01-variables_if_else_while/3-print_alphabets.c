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
	int m = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (m <= 90)
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}

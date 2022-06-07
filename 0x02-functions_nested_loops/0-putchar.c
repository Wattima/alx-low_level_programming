#include "main.h"
/**
 * main - Entry point
 * prints _putchar followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	char c;
	char d[] = "_putchar\n";

	while (i <= 8)
	{
		c = d[i];
		_putchar(c);
		i++;
	}
	return (0);
}

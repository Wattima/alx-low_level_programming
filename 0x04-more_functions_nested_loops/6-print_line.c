#include "main.h"
/**
 * print_line - Entry
 * draws a straight line
 * @n: the number of times char printed
 * Return: straight line
 */
void print_line(int n)
{
	int a = 1;

	while (a <= n)
	{
		_putchar(95);
		a++;
	}
	_putchar('\n');
}

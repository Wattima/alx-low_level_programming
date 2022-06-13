#include "main.h"
/**
 * print_rev - prints string in reverse followed
 * by a new line
 * @s: string
 * Return: Reverse
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != 0)
	{
		i++;
	}
	while (i > 0)
	{
		i--;
		_putchar(s[i]);
	}
	_putchar('\n');
}

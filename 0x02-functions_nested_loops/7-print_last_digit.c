#include "main.h"
/**
 * print_last_digit - Entry point
 * Desc - prints the last digit of a number
 * @l: last digit
 * Return: value of l
 */
int print_last_digit(int l)
{
	if (l > 0)
	{
		l = l % 10;
		_putchar(l + '0');
	}
	else
	{
		l = l % 10 * -1;
		_putchar(l + '0');
	}
	return (l);
}


#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * print_numbers - Entry point
 * prints the numbers, from 0 to 9
 * Return: numbers
 */
void print_numbers(void)
{
	int num;

	for (num = 48 ; num <= 57 ; num++)
		_putchar(num);
	_putchar('\n');
}

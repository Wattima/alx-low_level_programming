#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Description - prints the alphabet, in lowercase, followed by a new line
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int alpha;

	alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}

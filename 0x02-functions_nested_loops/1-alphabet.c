#include "main.h"
/**
 * main - check the code
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

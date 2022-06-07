#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * Description - prints 10 times the alphabet, in lowercase, followed by a new line
 * Return: Always o
 */
void print_alphabet_x10(void)
{
	int alpha;
	int count;

	count = 0;

	while (count <= 9)
	{
		alpha = 'a';
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		count++;
		_putchar('\n');
	}
}

#include "main.h"
/**
 * puts_half - prints half of a string, followed by
 * a new line.
 * @str: string
 * Return: half a string new line
 */
void puts_half(char *str)
{
	int i, h, size;

	size = 0;

	for (i = 0; str[i] != '\0'; i++)
		size++;

	h = (size / 2);

	if ((size % 2) == 1)
		h = ((size + 1) / 2);

	for (i = h; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}

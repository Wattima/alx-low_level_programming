#include "main.h"
/**
 * _isupper - Entry point
 * Desc - checks for uppercase character
 * @c: character checked
 * Return: 0 or 1
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}

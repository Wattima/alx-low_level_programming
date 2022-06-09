#include "main.h"
/**
 * _isdigit - Entry point
 * Desc - checks for a digit (0 through 9)
 * @c: character checked
 * Return: 1 0r 0
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

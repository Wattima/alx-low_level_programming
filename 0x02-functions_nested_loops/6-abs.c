#include "main.h"
/**
 * _abs - Entry point
 * Desc - computes the absolute value of an integer
 * @r: integer checked
 * @int: integer 
 * Return: int
 */
int _abs(int r)
{
	if (r >= 0)
		return (r);

	else
	{
		r *= -1;
		return (r);
	}
}

#include "main.h"
/**
 * times_table - Entry point
 * Desc - prints the 9 times table, starting with 0
 * Return: 9 times-table
 */
void times_table(void)
{
	int i, j, prod;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			prod = i * j;


			if (prod <= 9)
			{

				if (j != 0)
				{
					_putchar(' ');
				}
				_putchar(prod + '0');
			}
			else
			{
				_putchar(prod / 10 + '0');
				_putchar(prod % 10 + '0');
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
		}
	}
}

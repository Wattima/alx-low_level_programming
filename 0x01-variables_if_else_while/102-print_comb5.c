#include <stdio.h>
/**
 * main - Entry point
 * Desc - prints all possible combinations of two two-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i1;
	int i;
	int j1;
	int j;

	for (i1 = 48; i1 < 58; i1++)
	{
		for (i = 48; i < 58; i++)
		{
			j = i + 1;
			j1 = i1;
			for (; j1 < 58; j1++)
			{
				putchar(i1);
				putchar(i);
				putchar(' ');
				putchar(j1);
				putchar(j);
				if (i1 != 57 || j1 != 57 || i != 56 || j != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
			j = 48;
		}
	}
	putchar('\n');
	return (0);
}

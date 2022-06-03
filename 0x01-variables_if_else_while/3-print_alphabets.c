#include <stdio.h>
/**
 * main - Entry point
 * Description - alphabet in lowercase, uppercase, new line
 * putchar only thrice withh a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}

	char alpha = 'A';

	while (alpha <= 'Z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');

	return (0);
}


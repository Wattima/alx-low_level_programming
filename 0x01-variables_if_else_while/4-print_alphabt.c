#include <stdio.h>
/**
 * main - Entry point
 * Description - prints the alphabet in lowercase, followed by a new line
 * except e and q. Only use the putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}

	putchar('\n');

	return (0);
}

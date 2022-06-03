#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description - alphabet in lowercase, uppercase, new line
 * putchar only thrice withh a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);
	for (alpha = 'A'; alpha <= 'Z'; alpha++)
		putchar(alpha);
	putchar('\n');

	return (0);
}


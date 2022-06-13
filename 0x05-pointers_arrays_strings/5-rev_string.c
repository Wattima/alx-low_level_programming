#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string
 * Return: reversed string
 */
void rev_string(char *s)
{
	int i;
	int j;
	int t;
	int size;

	while (s[i] != 0)
	{
		i++;
	}

	size = i;
	i = 0;
	j = size - 1;

	while (i < j)
	{
		t = s[i];
		s[i] = s[j];
		s[j] = t;
		i++;
		j--;
	}
}

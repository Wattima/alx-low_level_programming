#include "main.h"
#include <string.h>
/**
 * *_strncat - concatenates two strings
 * @dest: first param
 * @src: second param
 * @n: bytes
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}

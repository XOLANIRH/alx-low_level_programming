#include "main.h"

/**
 * _memset - Fils te first n bytes
 * @s: A pointer the memory area
 * @b: constant byte that wil be written
 * @n: amount of times the byte
 * description _memset: over there
 * Return: Address of the memory
 */

void *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

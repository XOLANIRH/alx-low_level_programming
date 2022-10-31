#include "main.h"

/**
 * _memset - Fils te first n bytes
 * @s: A pointer the memory area
 * @c: The charactder to fill the memory
 * @n: The number of bytes
 * description _memset: over there
 * Return: A pointer
 */

void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}

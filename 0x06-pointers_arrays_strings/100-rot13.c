#include "main.h"

/**
 * rot13 - Encodes a string using rot13
 * @str: The string to be encoded
 *
 * Return: A pointer to the encoded string
 */

char *rot13(char *str)
{
	int a = 0;

	while (str[a])
	{
	while ((str[a] >= 'a' && str[a] <= 'z') || (str[a] >= 'A' && str[a] <= 'Z'))
	{
		if ((str[a] > 'm' && str[a] <= 'z') || (str[a] > 'M' && str[a] <= 'Z'))
		{
			str[a] -= 13;
			break;
		}

		str[a] += 13;
		break;

	}

	a++;
	}

	return (str);
}

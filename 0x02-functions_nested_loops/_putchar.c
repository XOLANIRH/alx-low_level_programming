#include "main.h"                                                                     
#include <unistd.h>                  
/**
 *_putchar - write the charecter c to stdout
 *
 * Return: Always 1 (success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

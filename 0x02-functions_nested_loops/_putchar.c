#include "main.h"
#include <unistd.h>
/**
 * _putchar - write the function c to stdout
 * @c: The character to print  
 *
 * Return: On Success 1.
 * On error, -1 is returned, and emmo is set appreciatly
 */
int _putchar(char c)
{
	return (write (1, &c, 1));
}

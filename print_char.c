#include <unistd.h>
#include <stdarg.h>
#include "main.h"
/**
 * print_char - print function
 * DESCRIPTION: a function that prints characters
 * @args: arguments passed to the function to print
 * @: number of printed characters
 * Return: number of printed characters
 */
int print_char(va_list args)
{
	char n = va_arg(args, int);

	return (write(1, &n, sizeof(char)));
}

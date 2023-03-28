#include <unistd.h>
#include <stdarg.h>
#include <string.h>
#include "main.h"
/**
 * print_float - print function
 * DESCRIPTION: a function that prints float numbers
 * @args: arguments passed to the function to be printed
 * @: number of printed characters
 * Return: number of printed characters
 */
int print_float(va_list args)
{
	float n = va_arg(args, double);
	int i, printed_count = 0;
	char str[20];

	if (n < 0)
	{
		n = -n;
		printed_count += _putchar('-');
	}
	sprintf(str, "%.6f", n);
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (printed_count);

}

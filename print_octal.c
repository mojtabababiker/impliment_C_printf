#include <unistd.h>
#include <stdarg.h>
#include <string.h>
#include "main.h"
/**
 * print_octal - print function
 * DESCRIPTION: a function that prints numbers in
 * octal format
 * @args: arguments passed to the function to be printed
 * @: number of printed characters
 * Return: number of printed characters
 */
int print_octal(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int i = 0, j, printed_count = 0;
	char str[20] = {0};

	if (n == 0)
	{
		printed_count += _putchar('0');
		return (printed_count);
	}
	while (n != 0)
	{
		str[i] = (n % 8) + '0';
		n /= 8;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		printed_count += _putchar(str[j]);
	}
	return (printed_count);
}

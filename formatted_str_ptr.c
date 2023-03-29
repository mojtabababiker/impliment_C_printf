#include "main.h"

/**
 * print_str - write to stdout array of chars to stdout
 * Description: write to stdout using the value of va_list
 * @args: va_list holds the current parameter of the _printf
 *       function in this case array of chars
 * Return: number of printed chars
 */
int print_str(va_lisr args)
{
	char *str;

	int printed_chars = 0;

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(null)";
	while (*str)
	{
		printed_chars += _putchar(*str);
		str++;
	}
	return (printed_chars);
}

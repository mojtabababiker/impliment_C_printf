#include "main.h"


/**
 * print_str - write to stdout array of chars to stdout
 * Description: write to stdout using the value of va_list
 * @args: va_list holds the current parameter of the _printf
 *       function in this case array of chars
 * Return: number of printed chars
 */
int print_str(va_list args)
{
	char *str;

	int printed_chars = 0;

	str = va_arg(args, char *);
	if (str == NULL)
	{
		str = "(null)";
	}
	while (*str != '\0')
	{
		printed_chars += _putchar(*str);
		str++;
	}

	return (printed_chars);
}

/**
 * print_STR - custom specifier to print strings with non printable chars
 * @args: va_list holds the current parameter of the _printf
 * Return: number of printed chars
 */
int print_STR(va_list args)
{
	char *str = va_arg(args, char *);
	int prt_chars = 0;

	if (str == NULL)
		str = "(nill)";
	while (*str != '\0')
	{
		if ((*str > 0 && *str < 32) || *str > 126)
		{
			prt_chars += _putchar(92);/*forword slach*/
			prt_chars += _putchar('x');
			prt_chars += print_short_c_hex((unsigned short)(*str), 0);
		}
		else
		{
			prt_chars += _putchar(*str);
		}
		str++;
	}

	return (prt_chars);
}

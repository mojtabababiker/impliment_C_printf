#include "main.h"

/**
 * _printf - print to the stdout evrey thing in formattee string
 * @format: formatted string that contains the normal charcters and the
 *          formatted spcifiers and escaped chars
 * return - 1-seccuss 0-other-wise
 */

int _printf(const char *format, ...)
{
	va_list args;
	int printed_chars;
	int i;

	if (format == NULL)
		//do as printf do
		;
	va_start(args, format);
	while (format)
	{
		if (*format == '%')
		{
			printed_chars += formated_specifeir(++format, args);
		}
		else if (*format = 92) /*92 is '\' asci code*/
		{
			printed_chars += escaped_specifier(++format, args);
		}
		else
		{
			_putchat(*format);
			printed_chars++;
		}

		format++;
	}
	va_end(args);
	return (printed_chars);

}

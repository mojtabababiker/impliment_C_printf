#include "main.h"

int formatted_specifier(char *formatted_str, va_list args);
int escaped_specifier(char *formatted_str);

/**
 * _printf - write to stdout every thing in the formattint string
 * @format: fprmatted strings that contains the ormal characters,
 *          formatted specifiers and escaped characters.
 * Return: number of printed characters, -1 fialed
 */

int _printf(const char *format, ...)
{
	char *frmt_str;
	va_list args;

	int printed_chars = 0;

	frmt_str = (char *)format;
	va_start(args, format);
	while (*frmt_str == '\0')
	{
		if (*frmt_str == '%')
		{
			printed_chars += formatted_specifier(++frmt_str, args);
			++frmt_str;
		}
		else if (*frmt_str == 92)
		{
			printed_chars += escaped_specifier(++frmt_str);
		}
		else
		{
			_putchar(*frmt_str);
			printed_chars++;
			frtm_str++;
		}
	}
	return (printed_chars);
}

/**
 * formatted_specifier - check the specifier and call the function
 *                       that able to print it
 * @formatted_str: pointer to specifier char
 * @args: the current parameter in the va_list args variable
 * Return: number of printed chars
 */
int formatted_specifier(char *formatted_str, va_list args)
{
	char specifier_chars[] = {'c', 'd', 'i', 'u', 's', 'p', 'x', 'X', 'o',
				  'b'};

	int (*print_specifier_func[])(va_list args) = {print_char, print_int,
						       print_int, print_float,
						       print_unsin, print_str
						       , print_ptr, print_s_hex,
						       print_octal, print_binary
	};

	int printed_chars = 0, i = 0;
	int len = strlen(specifier_chars);

	for (i = 0 ; i < len ; i++)
	{
		if (*formatted_str == specifier_chars[i])
		{
			printed_chars += print_specifier_func[i](args);
			return (printed_chars);
		}
	}
	if (*formatted_str == 'l')
	{
		return (printed_chars + print_long(args, ++formatted_str));
	}
	else if (*formatted_str == 'h')
	{
		return (printed_chars + print_short(args, ++formatted_str));
	}
	else if (*formatted_str == '%')
	{
		return (printed_chars + _putchar('%'));
	}
/* if the formatted_str is not a formatting specifier, just print it*/
	_putchar('%');
	printed_chars++;
	_putchar(*formatted_str);
	return (++printed_chars);
}


/**
 * escaped_specifier - check the escaped char and call the function
 *                      that able to perform the escaped char
 * @formatted_str: pointer to the escaped char
 * @args: the current parameter in the va_list args variable
 * Return: number of printed char
*/
int escaped_specifier(char *formatted_str)
{
	char escaped_chars[] = {'n', 'r', 'f', 't', 'v', 'a',
				'b', '?', 92, 44, 34};

	int (*print_escaped_func[])() =   {print_nl, print_cr, print_np,
					   print_tab, print_vtap, print_bell,
					   print_bspace, print_qm, print_bslash,
					   print_sq, print_dq
	};

	int printed_chars = 0;
	int i = 0;
/*int len = strlen(escaped_chars);*/
	return (-1);
}

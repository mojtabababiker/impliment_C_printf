#include "main.h"
/**
 * print_long- write to stdout long data type number
 * @args: va_list holds the current parameter of the _printf
 * function,long integer
 * @format: pointer to the next value of the l specifier
 * @args: specifier sent to the function
 * Return: number of printed chars
*/
int print_long(va_list args, char *format)
{
	unsigned long int num;
	long num2;

	int printed_chars = 0;

	switch (*format)
	{
	case 'u':
		num = va_arg(args, unsigned long int);
		printed_chars += print_long_unsin(num, 0);
		break;
	case 'o':
		num = va_arg(args, unsigned long int);
		printed_chars += print_long_octal(num, 0);
		break;
	case 'x':
		num = va_arg(args, unsigned long int);
		printed_chars += print_long_s_hex(num, 0);
		break;
	case 'X':
		num = va_arg(args, unsigned long int);
		printed_chars += print_long_c_hex(num, 0);
		break;
	case 'i':
		num2 = va_arg(args, long int);
		if (num2 < 0)
		{
			printed_chars += _putchar('-');
			/*num = -num2;*/
			printed_chars += print_long_num((unsigned)-num2, 0);
			break;
		}
		printed_chars += print_long_num((unsigned)num2, 0);
		break;
	case 'd':
		num2 = va_arg(args, long int);
		if (num2 < 0)
		{
			printed_chars += _putchar('-');
			/*num = -num2;*/
			printed_chars += print_long_num((unsigned)-num2, 0);
			break;
		}
		printed_chars += print_long_num((unsigned)num2, 0);
		break;
	default:
		printed_chars += _putchar('%');
		return (printed_chars);
	}
	++format;
	return (printed_chars);
}

/**
 * print_short - write to stdout short data type number
 * @args: va_list holds the current parameter of the _printf
 * function,short integer
 * @format: pointer to the next value of the s specifier
 * Return: number of printed chars
*/
int print_short(va_list args, char *format)
{
	unsigned short int num;
	short num2;

	int printed_chars = 0;


	switch (*format)
	{
	case 'u':
		num = va_arg(args, int);
		printed_chars += print_short_unsin(num, 0);
		break;
	case 'o':
		num = va_arg(args, int);
		printed_chars += print_short_octal(num, 0);
		break;
	case 'x':
		num = va_arg(args, int);
		printed_chars += print_short_s_hex(num, 0);
		break;
	case 'X':
		num = va_arg(args, int);
		printed_chars += print_short_c_hex(num, 0);
		break;
	case 'i':
		num2 = va_arg(args, int);
		if (num2 < 0)
		{
			printed_chars += _putchar('-');
			/*num = -num2;*/
			printed_chars += print_short_num((unsigned)-num2, 0);
			break;
		}
		printed_chars += print_short_num((unsigned)num2, 0);
		break;
	case 'd':
		num2 = va_arg(args, int);
		if (num2 < 0)
		{
			printed_chars += _putchar('-');
			/*num = -num2;*/
			printed_chars += print_short_num((unsigned)-num2, 0);
			break;
		}
		printed_chars += print_short_num((unsigned)num2, 0);
		break;
	default:
		printed_chars += _putchar('%');
		return (printed_chars);
	}
	++format;
	return (printed_chars);
}

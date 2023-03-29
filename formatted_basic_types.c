#include "main.h"

int put_num(unsigned int n);

/**
 * print_char - write to stdout a single character that will be provided by
 *              va_list
 * @args: va_list holding the current parameter of the function, in this case
 *        holding a single character
 * Return: number of printed chars, 1 in this case
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);

	return (_putchar(c));
}

/**
 * print_int - write to stdout an integer number provided by
 *             va_list
 * @args: va_list that holds the currrent parameter of the function_printf,
 *         an integer number in this case
 * Return: number of printed chars
 */
int print_int(va_list args)
{
	int i = va_arg(args, int);

	if (i < 0)
	{
		_putchar('-');
		i = -i;
		return (put_num((unsigned int)i) + 1);
	}
	return (put_num((unsigned int)i));
}

/**
 * print_float - write to stdout a float number provided by
 *               va_list
 * @args: va_list that holds the current prameter of the function _printf,
 *       a floating point number in this case
 * Return: number of printed chars
 */
int print_float(va_list args)
{
	char str[20];

	float n = va_arg(args, double);
	int i = 0, printed_chars = 0;

	if (n < 0)
	{
		n = -n;
		printed_chars += _putchar('-');
	}
	sprintf(str, "%.6f", n);
	for (i = 0 ; str[i] != '\0' ; i++)
	{
		_putchar(str[i]);
		printed_chars++;
	}
	return (printed_chars);
}

/**
 * print_unsin - write unsigned numbre to stdout
 * @args: va_list holds the current parameter of the function _printf,
 *       unsigned int in this case
 * Return: number of printed chars
 */
int print_unsin(va_list args)
{
	unsigned int i = va_arg(args, unsigned int);

	return (put_num(i));
}

/**
 * put_num - write multi digits integer to stdout
 * @n: the integer to be wrote
 * Return: number of printed chars
 */
int put_num(unsigned int n)
{
	static int printed_chars = 1;

	if (n / 10 == 0)
	{
		return (_putchar(n + '0'));
	}
	printed_chars += put_num(n / 10);
	printed_chars += _putchar((n % 10) + '0');
	return (printed_chars - 1);
}

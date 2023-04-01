#include "main.h"

/**
 * print_long_num - write to stdout long integer in decimal format
 * @num: long integer to wrote
 * @prt_chars: number of printed characters
 * Return: number of printed chars
*/
int print_long_num(unsigned long num, int prt_chars)
{
	if (num == LONG_MAX)
		printf("\n\nOK ITS LONG_MAX\n\n");
	if ((long)-num == LONG_MIN)
		printf("\n\nOK ITS LONG_MIN\n\n");
	if (num / 10 == 0)
	{
		return (_putchar(num + '0') + prt_chars);
	}
	prt_chars = print_long_num(num / 10, prt_chars + 1);
	_putchar(num % 10 + '0');
	return (prt_chars);
}

/**
 * print_long_c_hex - write to stdout long integer in HEXADECIMAL format
 * @num: unsigned long integer to wrote
 * @prt_chars: number of printed characters
 * Return: number of printed chars
*/
int print_long_c_hex(unsigned long num, int prt_chars)
{
	if (num / 16 == 0)
	{
		if (num >= 10)
			return (prt_chars + _putchar((num - 10) + 'A'));
		return (prt_chars + _putchar(num + '0'));
	}
	prt_chars = print_long_c_hex(num / 16, prt_chars + 1);
	if (num % 16 >= 10)
	{
		_putchar((num % 16 - 10) + 'A');
		return (prt_chars);
	}
	_putchar(num % 16 + '0');
	return (prt_chars);
}

/**
 * print_long_s_hex - write to stdout long integer in hexadecimal format
 * @num: unsigned long integer to wrote
 * @prt_chars: number of printed characters
 * Return: number of printed chars
*/
int print_long_s_hex(unsigned long num, int prt_chars)
{
	if (num / 16 == 0)
	{
		if (num >= 10)
			return (prt_chars + _putchar((num - 10) + 'a'));
		return (prt_chars + _putchar(num + '0'));
	}
	prt_chars = print_long_s_hex(num / 16, prt_chars + 1);
	if (num % 16 >= 10)
	{
		_putchar((num % 16 - 10) + 'a');
		return (prt_chars);
	}
	_putchar(num % 16 + '0');
	return (prt_chars);
}

/**
 * print_long_octal - write to stdout long integer in octal format
 * @num: unsigned long integer to wrote
 * @prt_chars: number of printed characters
 * Return: number of printed chars
*/
int print_long_octal(unsigned long num, int prt_chars)
{
	if (num / 8 == 0)
	{
		return (prt_chars + _putchar(num + '0'));
	}
	prt_chars = print_long_c_hex(num / 8, prt_chars + 1);
	_putchar(num % 8 + '0');
	return (prt_chars);
}

/**
 * print_long_unsin - write to stdout unsigned
 * long integer in decimal format
 * @num: unsigned long integer to wrote
 * @prt_chars: number of printed characters
 * Return: number of printed chars
*/
int print_long_unsin(unsigned long num, int prt_chars)
{
	if (num / 10 == 0)
	{
		return (_putchar(num + '0'));
	}
	prt_chars = print_long_num(num / 10, prt_chars + 1);
	_putchar(num % 10 + '0');
	return (prt_chars);
}

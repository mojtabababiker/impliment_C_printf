#include "main.h"

/**
 * print_short_num - write to stdout short integer in decimal format
 * @num: short integer to wrote
 * @prt_chars: number of printed characters
 * Return: number of printed chars
*/
int print_short_num(unsigned short num, int prt_chars)
{
	if (num / 10 == 0)
	{
		return (_putchar(num + '0') + prt_chars);
	}
	prt_chars = print_short_num(num / 10, prt_chars + 1);
	_putchar(num % 10 + '0');
	return (prt_chars);
}

/**
 * print_short_c_hex - write to stdout short integer in HEXADECIMAL format
 * @num: unsigned short integer to wrote
 * @prt_chars: number of printed characters
 * Return: number of printed chars
*/
int print_short_c_hex(unsigned short num, int prt_chars)
{
	if (num / 16 == 0)
	{
		if (num >= 10)
			return (prt_chars + _putchar((num - 10) + 'A'));
		return (prt_chars + _putchar(num + '0'));
	}
	prt_chars = print_short_c_hex(num / 16, prt_chars + 1);
	if (num % 16 >= 10)
	{
		_putchar((num % 16 - 10) + 'A');
		return (prt_chars);
	}
	_putchar(num % 16 + '0');
	return (prt_chars);
}

/**
 * print_short_s_hex - write to stdout short integer in hexadecimal format
 * @num: unsigned short integer to wrote
 * @prt_chars: number of printed characters
 * Return: number of printed chars
*/
int print_short_s_hex(unsigned short num, int prt_chars)
{
	if (num / 16 == 0)
	{
		if (num >= 10)
			return (prt_chars + _putchar((num - 10) + 'a'));
		return (prt_chars + _putchar(num + '0'));
	}
	prt_chars = print_short_s_hex(num / 16, prt_chars + 1);
	if (num % 16 >= 10)
	{
		_putchar((num % 16 - 10) + 'a');
		return (prt_chars);
	}
	_putchar(num % 16 + '0');
	return (prt_chars);
}

/**
 * print_short_octal - write to stdout short integer in octal format
 * @num: unsigned short integer to wrote
 * @prt_chars: number of printed characters
 * Return: number of printed chars
*/
int print_short_octal(unsigned short num, int prt_chars)
{
	if (num / 8 == 0)
	{
		return (prt_chars + _putchar(num + '0'));
	}
	prt_chars = print_short_c_hex(num / 8, prt_chars + 1);
	_putchar(num % 8 + '0');
	return (prt_chars);
}

/**
 * print_short_unsin - write to stdout unsigned
 * short integer in decimal format
 * @num: unsigned short integer to wrote
 * @prt_chars: number of printed characters
 * Return: number of printed chars
*/
int print_short_unsin(unsigned short num, int prt_chars)
{
	if (num / 10 == 0)
	{
		return (_putchar(num + '0'));
	}
	prt_chars = print_short_num(num / 10, prt_chars + 1);
	_putchar(num % 10 + '0');
	return (prt_chars);
}

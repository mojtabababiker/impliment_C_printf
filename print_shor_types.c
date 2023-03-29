#include "main.h"

/**
 * print_short_num- print short integer
 * Description: write to stdout short integer in decimal format
 * @num: short integer to wrote
 * Return: number of printed chars
*/
int print_short_num(short num)
{
	static int printed_chars;

	if (num / 10 == 0)
	{
		return (_putchar(num + '0'));
	}
	printed_chars += print_short_num(num / 10);
	return (printed_chars + _putchar(num % 10 + '0'));
}

/**
 * print_short_c_hex - write to stdout short integer in HEXADECIMAL format
 * @num: unsigned short integer to wrote
 * Return: number of printed chars
*/
int print_short_c_hex(unsigned short num)
{
	static int printed_chars;

	if (num / 16 == 0)
	{
		if (num >= 10)
			return (printed_chars + _putchar((num - 10) + 'A'));
		return (printed_chars + _putchar(num + '0'));
	}
	printed_chars += print_short_c_hex(num / 16);
	if (num % 16 >= 10)
		return (printed_chars + _putchar((num % 16 - 10) + 'A'));
	return (printed_chars + _putchar(num % 16 + '0'));
}

/**
 * print_short_s_hex - write to stdout short integer in hexadecimal format
 * @num: unsigned short integer to wrote
 * Return: number of printed chars
*/
int print_short_s_hex(unsigned short num)
{
	static int printed_chars;

	if (num / 16 == 0)
	{
		if (num >= 10)
			return (printed_chars + _putchar((num - 10) + 'a'));
		return (printed_chars + _putchar(num + '0'));
	}
	printed_chars += print_short_s_hex(num / 16);
	if (num % 16 >= 10)
		return (printed_chars + _putchar((num % 16 - 10) + 'a'));
	return (printed_chars + _putchar(num % 16 + '0'));
}

/**
 * print_short_octal - write to stdout short integer in octal format
 * @num: unsigned short integer to wrote
 * Return: number of printed chars
*/
int print_short_octal(unsigned short num)
{
	static int printed_chars;

	if (num / 8 == 0)
	{
		return (printed_chars + _putchar(num + '0'));
	}
	printed_chars += print_short_c_hex(num / 8);
	return (printed_chars + _putchar(num % 8 + '0'));
}

/**
 * print_short_unsign - write to stdout unsigned
 * short integer in decimal format
 * @num: unsigned short integer to wrote
 * Return: number of printed chars
*/
int print_short_unsign(unsigned short num)
{
	static int printed_chars;

	if (num / 10 == 0)
	{
		return (_putchar(num + '0'));
	}
	printed_chars += print_short_num(num / 10);
	return (printed_chars + _putchar(num % 10 + '0'));
}

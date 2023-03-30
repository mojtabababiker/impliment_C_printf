#include "main.h"

int print_num(unsigned int num, int prt_char);

/**
 * print_c_hex - write to stdout number in HEXADESIMAL format
 * @args: va_list holds the current parameter of the _printf function,
 *        in this case unsigned integer
 * Return: number of printed chars
 */
int print_c_hex(va_list args)
{
	unsigned int temp;

	unsigned int n = va_arg(args, unsigned int);

	int i = 0, j = 0, printed_chars = 0;
	char str[20] = {0};

	while (n != 0)
	{
		temp = 0;
		temp = n % 16;
		if (temp < 10)
		{
			str[i] = temp + '0';
			i++;
		} else
		{
			str[i] = temp - 10 + 'A';
			i++;
		}
		n = n / 16;
	}

	if (i == 0)
	{
		str[i] = '0';
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		printed_chars += _putchar(str[j]);
	}
	return (printed_chars);
}


/**
 * print_s_hex - print function
 * DESCRIPTION: a function that prints numbers into
 * small hex decimal format
 * @args: arguments passed to the function to be printed
 * @: number of printed characters
 * Return: number of printed characters
 */
int print_s_hex(va_list args)
{
	unsigned int temp;

	unsigned int n = va_arg(args, unsigned int);
	int i = 0, j = 0, printed_chars = 0;
	char str[20] = {0};

	while (n != 0)
	{
		temp = 0;
		temp = n % 16;
		if (temp < 10)
		{
			str[i] = temp + '0';
			i++;
		} else
		{
			str[i] = temp - 10 + 'a';
			i++;
		}
		n = n / 16;
	}
	for (j = i - 1; j >= 0; j--)
	{
		printed_chars += _putchar(str[j]);
	}
	return (printed_chars);
}

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
	int i = 0, j = 0, printed_chars = 0;
	char str[20] = {0};

	if (n == 0)
	{
		printed_chars += _putchar('0');
		return (printed_chars);
	}
	while (n != 0)
	{
		str[i] = (n % 8) + '0';
		n /= 8;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		printed_chars += _putchar(str[j]);
	}
	return (printed_chars);
}

/**
 * print_binary - write to stdout integer in binary format
 * @args: va_list holds the current parameter of the _printf function,
 *        in this case integer number
 * Return: number of printed chars
*/
int print_binary(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);

	return (print_num(num, 0) - 1);
}

/**
 * print_num - write integer number in binary format
 * @num: number to converted to binary and wrote it
 * Return: number of printed chars
*/
int print_num(unsigned int num, int prt_chr)
{
	if (num / 2 == 0)
	{
		return (_putchar(num + '0') + prt_chr);
	}
	prt_chr = print_num(num / 2, prt_chr + 1);
	_putchar(num % 2 + '0');
	return (prt_chr);
}

#include <unistd.h>
#include <stdarg.h>
#include <string.h>
#include "main.h"
/**
 * print_s_hex - print function
 * DESCRIPTION: a function that prints numbers into
 * samall hex decimal format
 * @args: arguments passed to the function to be printed
 * @: number of printed characters
 * Return: number of printed characters
 */
int print_s_hex(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	unsigned int temp;
	int i = 0, j, printed_count = 0;
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
		printed_count += _putchar(str[j]);
	}
	return (printed_count);
}

/**
 * print_c_hex - print function
 * DESCRIPTION: a function that prints numbers into
 * capital hex decimal format
 * @args: arguments passed to the function to be printed
 * @: number of printed characters
 * Return: number of printed characters
 */
int print_c_hex(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	unsigned int temp;
	int i = 0, j, printed_count = 0;
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
		printed_count += _putchar(str[j]);
	}
	return (printed_count);
}

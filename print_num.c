#include "main.h"
/**
 * print_int - print function
 * DESCRIPTION: a function that prints numbers
 * @args: arguments passed to the function to be printed
 * @: number of printed characters
 * Return: number of printed characters
 */
int print_int(va_list args)
{
	int j,  n = va_arg(args, int);
	int printed_count = 0;
	char buffer[sizeof(int)];
	char minus_sign = '\0';

	/*Convert the integer to a string*/
	int i = 0;

	if (n == 0)
	{
		buffer[i++] = '0';
	} else
	{
		if (n < 0)
		{
			minus_sign = '-';
			n = -n;
		}
		while (n > 0)
		{
			buffer[i++] = (n % 10) + '0';
			n /= 10;
		}
		/*Reverse the string*/
		for (j = 0; j < i / 2; j++)
		{
			char tmp = buffer[j];

			buffer[j] = buffer[i - j - 1];
			buffer[i - j - 1] = tmp;
		}
		/*Insert minus sign at the beginning of the buffer*/
		if (minus_sign != '\0')
		{
			for (j = i; j > 0; j--)
			{
				buffer[j] = buffer[j - 1];
			}
        buffer[0] = minus_sign;
		i++;
		}
		buffer[i] = '\0'; /*Add null terminator*/
	}
	/*Print the string*/
	for (j = 0; j < i; j++)
	{
		write(1, &buffer[j], sizeof(char));
		printed_count++;
	}
	write(1, "\n", 1);
	return (printed_count);
}
int print_str(va_list args)
{
	args++;
	return (0);
}
int print_unsigned(va_list args)
{
	args++;
	return (0);
}
int print_ptr(va_list args)
{
	args++;
	return (0);
}
int print_octal(va_list args)
{
	args++;
	return (0);
}
int print_s_hex(va_list args)
{
	args++;
	return (0);
}
int print_c_hex(va_list args)
{
	args++;
	return (0);
}
int print_percentage(va_list args)
{
	args++;
	return (0);
}
int print_long(va_list args)
{
	args++;
	return (0);
}
int print_short(va_list args)
{
	args++;
	return (0);
}

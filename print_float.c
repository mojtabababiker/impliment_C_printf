#include <unistd.h>
#include <stdarg.h>
#include "main.h"
#include <math.h>
/**
 * print_int - print function
 * DESCRIPTION: a function that prints numbers
 * @args: arguments passed to the function to be printed
 * @: number of printed characters
 * Return: number of printed characters
 */
int rec_num(unsigned long n);
int print_float(va_list args)
{
	int decimal_num;
	double float_num;  
	float n = va_arg(args, double);
	int printed_count = 0;

	float_num = modf(n, &float_num);
	if (n < 0)
	{
		n = -n;
		printed_count += _putchar('-');
	}
	decimal_num = (int) n;
	printed_count += rec_num((unsigned long)decimal_num);
	printed_count += _putchar('.');
	printed_count += rec_num((unsigned long)float_num);
	return (printed_count);

}


int rec_num(unsigned long n)
{
	static int x = 0;
	if (n / 10 == 0)
	{
		return (_putchar(n + '0'));
	}
	x += rec_num(n / 10);
	x += _putchar(n % 10 + '0');
	return (x);
}

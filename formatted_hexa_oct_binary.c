/**
 * write to stdout hexadecimal both in small and capital format,
 * octal numbers and integer formatted to binary
 */
#include "main.h"

/**
 * print_c_hex - write to stdout unsigned number in HEXADECIMAL format
 * @args: va_list holds the current parameter of the _printf function,
 *        in this case unsigned integer
 * Return: number of printed chars
 */
int print_c_hex(va_list args)
{
        return(0);
}

/**
 * print_s_hex - write to stdout unsigned number in hexadecimal format
 * @args: va_list holds the current parameter of the _printf function,
 *        in this case unsigned integer
 * Return: number of printed chars
*/
int print_s_hex(va_list args)
{
        return(0);
}

/**
 * print_octal - write to stdout unsigned number in octal format
 * @args: va_list holds the current parameter of the _printf function,
 *        in this case unsigned integer
 * Return: number of printed chars
*/
int print_octal(va_list args)
{
        return(0);
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
        return (print_num(num));
}

/**
 * print_num - write integer number in binary format
 * @num: number to converted to binary and wrote it
 * Return number of printed chars
*/
int print_num(unsigned int num)
{
        static int printed_chars = 0;
        if (num / 2 == 0)
        {
                return (_putchar(num + '0'));
        }
        printed_chars += print_num(num / 2);
        return (printed_chars + _putchar(num % 2 + '0'));
}
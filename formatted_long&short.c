/**
 * write to stdout numbers that have long or short data type
*/
#include "main.h"
/**
 * print_long - write to stdout long data type number
 * @args: va_list holds the current parameter of the _printf function,
 *        long integer
 * @format: pointer to the next value of the l specifier
 * Return: number of printed chars 
*/
int print_long(va_list args, char *format)
{
        int printed_chars = 0;
        unsigned long num = va_arg(args, unsigned long int);
        switch (*format)
        {
        case 'u':
                printed_chars += print_long_unsigned(num);
                break;
        case 'o':
                printed_chars += print_long_octal(num);
                break;
        case 'x':
                printed_chars += print_long_s_hex(num);
                break;
        case 'X':
                printed_chars += print_long_c_hex(num);
                break;
        default:
                long num2 = va_arg(args, long int);
                if (num2 < 0)
                {
                        printed_chars += _putchar('-');
                        num2 = -num2;
                }
                printed_chars += print_long_num(num2);
                break;
        }
        return (printed_chars);        
}

/**
 *  * print_short - write to stdout short data type number
 * @args: va_list holds the current parameter of the _printf function,
 *        short integer
 * @format: pointer to the next value of the s specifier
 * Return: number of printed chars 
*/
int print_short(va_list args, char *format)
{
        int printed_chars = 0;
        unsigned short num = va_arg(args, unsigned short int);
        switch (*format)
        {
        case 'u':
                printed_chars += print_short_unsigned(num);
                break;
        case 'o':
                printed_chars += print_short_octal(num);
                break;
        case 'x':
                printed_chars += print_short_s_hex(num);
                break;
        case 'X':
                printed_chars += print_short_c_hex(num);
                break;
        default:
                short num2 = va_arg(args, short int);
                if (num2 < 0)
                {
                        printed_chars += _putchar('-');
                        num2 = -num2;
                }
                printed_chars += print_short_num(num2);
                break;
        }
        return (printed_chars);
}

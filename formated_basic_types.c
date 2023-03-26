/**
 * This Code is for writing the basic C data types, eg.., integer, char, string, plus printing '%'
 * using _putchar, and recursive functions to print integers and strings
*/

#include "main.h"

/**
 * print_char - write to stdout a single character that will be provide by args list
 * @args: va_list holding the current parameter of the function, in this case holding
 *      a single char
 * Return: 1 if success, -1 other-wise, 0 means no char printed
*/

int print_char(va_list args)
{
        char c;

        c = va_args(args, int);
        
}

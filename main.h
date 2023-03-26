#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

int _putchar(char c);
int _printf(const char *format, ...);
/*
int print_char(va_list args);
int print_int(va_list args);
int print_float(va_list args);
int print_unsigned(va_list args);
int print_str(va_list args);
int print_pointer(va_list args);
int print_percentage(va_list args);
int print_long(va_list args);
int print_short(va_list args);
*/
int print_nl();
int print_cr();
int print_np();
int print_tab();
int print_vtap();
int print_bell();
int print_bspace();
int print_qm();
int print_bslash();
int print_sq();
int print_dq();

#endif
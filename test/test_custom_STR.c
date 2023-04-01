#include "../main.h"

/**
 * main - test the custom %S specifier
 * Rerurn: always 0
 */
int main(void)
{
	char *str = "Best\nSchool\tin\rthe\bworld";
	int len = 0;

	len = _printf("%S\n", str);
	_printf("len str: %d\n", len);
	return (0);
}

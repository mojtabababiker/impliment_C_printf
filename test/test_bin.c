#include "../main.h"

/**
 * main - test binary function
 * Return: always 0
 */

int main(void)
{
	unsigned int binary[] = {0, -1024, UINT_MAX, UINT_MAX + 1024, 1024, INT_MAX};
	unsigned int i = 0;
	int len = 0;
	for (i = 0 ; i < sizeof binary / sizeof binary[1] ; i++)
	{
		len = _printf("%u in binary => %b\n",binary[i], binary[i]);
		_printf("%d\n", len);
	}
	_printf("%b + %b = %b\n", UINT_MAX, 1024, UINT_MAX + 1024);
	return (0);
}

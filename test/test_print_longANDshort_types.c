#include "../main.h"

/**
 * mian - test the printig proccess for both long and short types
 * Return: always 0
 */
int main(void)
{
	long int num[] =  {0l, 10l, 1024l, 430000, LONG_MIN + LONG_MAX,
		      LONG_MAX, LONG_MIN, -1024l};
	unsigned int i = 0;
	int len1 = 0, len2 = 0;
	for (i = 0 ; i < (sizeof num / sizeof(long int)) ; i++)
	{
		len1 = _printf("_printf: num[%u] => %l\n", i, num[i]);
		len2 = printf("printf: num[%u] => %l\n", i, num[i]);
		printf("len1 = %u\n", len1);
		printf("len2 = %u\n", len2);
	}
	_printf("\n");
	for (i = 0 ; i < (sizeof num / sizeof(long int)) ; i++)
	{
		len1 = _printf("_printf: num[%u] => %li\n", i, num[i]);
		len2 = printf("printf: num[%u] => %li\n", i, num[i]);
		printf("len1 = %u\n", len1);
		printf("len2 = %u\n", len2);
	}
	_printf("\n");
	for (i = 0 ; i < (sizeof num / sizeof(long int)) ; i++)
	{
		len1 = _printf("_printf: num[%u] => %ld\n", i, num[i]);
		len2 = printf("printf: num[%u] => %ld\n", i, num[i]);
		printf("len1 = %u\n", len1);
		printf("len2 = %u\n", len2);
	}
	_printf("\n");
/*	for (i = 0 ; i < (sizeof num / sizeof(long int)) ; i++)
	{
		len1 = _printf("_printf: num[%u] => %lx\n", i, num[i]);
		len2 = printf("printf: num[%u] => %lx\n", i, num[i]);
		printf("len1 = %u\n", len1);
		printf("len2 = %u\n", len2);
	}
	_printf("\n");
	for (i = 0 ; i < (sizeof num / sizeof(long int)) ; i++)
	{
		len1 = _printf("_printf: num[%u] => %lX\n", i, num[i]);
		len2 = printf("printf: num[%u] => %lX\n", i, num[i]);
		printf("len1 = %u\n", len1);
		printf("len2 = %u\n", len2);
	}
	_printf("\n");
	for (i = 0 ; i < (sizeof num / sizeof(long int)) ; i++)
	{
		len1 = _printf("_printf: num[%u] => %lo\n", i, num[i]);
		len2 = printf("printf: num[%u] => %lo\n", i, num[i]);
		printf("len1 = %u\n", len1);
		printf("len2 = %u\n", len2);
	}
*/
	return (0);
}

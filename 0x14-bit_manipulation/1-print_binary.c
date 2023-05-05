#include "main.h"

/**
 * _pow - calculates (base ^ power)
 * @power: the  power of the exponent
 * @base: the base of the exponent
 *
 * Return: value of (base ^ power)
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int mau;
	unsigned int i;

	mau = 1;
	for (i = 1; i <= power; i++)
		mau *= base;
	return (mau);
}

/**
 * print_binary - prints a number in binary notation
 * @n: number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int divider, check;
	char flag;

	flag = 0;
	divider = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (divider != 0)
	{
		check = n & divider;
		if (check == divider)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || divider == 1)
		{
			_putchar('0');
		}
		divider >>= 1;
	}
}

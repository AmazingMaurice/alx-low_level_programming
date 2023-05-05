#include"main.h"

/**
 * get_bit - returns the value of a bit in a given index.
 * @n: number to check bits in
 * @index: index at which to check bit
 *
 * Return: value of the bit, or -1 if there is an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divider;
	unsigned int checker;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	divider = 1 << index;
	checker = n & divider;
	if (checker == divider)
		return (1);
	return (0);
}

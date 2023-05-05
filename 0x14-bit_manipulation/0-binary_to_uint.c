#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to a string with a binary  number.
 *
 * Return: unsigned int with decimal value or zero if error.
 */
unsigned int binary_to_uint(const char *b);
{
	unsigned int result = 0;
	unsigned int weight = 1;
	char *x = b;

	/* checking if the string is empty or not */
	if (b == NULL)
		return (0);
	/* moving x to the end of the string */
	while (*x != ‘\0’)
	{
		x++;
	}
	/* moving x one step back to be on the last character */
	x--;
	while (x >= b)
	{
		/* checking for valid character */
		if (*x == ‘1’)
			/* if the input is 1, add to weight */
		{
			result += weight;
		}
		else if (*x != ‘0’)
			/* checkig if the input is invalid, return 0 if invalid */
		{
			return (0);
		}
		/* updating the weight value, and move pointer one char backwards */
		weight *= 2;
	x--;
	}
	return (result);
}

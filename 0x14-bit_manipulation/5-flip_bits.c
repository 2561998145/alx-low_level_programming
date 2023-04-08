#include "main.h"
#include <stdio.h>

/**
 * flip_bits - Counts the number of bits needed to flip to convert one number to another number
 * @n: First number
 * @m: Second number to convert to
 *
 * Return: Number of bits that needed to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	int counter = 0;

	while (diff != 0)
	{
		counter++;
		diff &= (diff - 1);
	}

	return counter;
}

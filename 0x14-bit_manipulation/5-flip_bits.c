#include "main.h"
#include <stdio.h>

/**
 * flip_bits - Determines the number of bits needed to flip to convert one number to another.
 *
 * @n: First number.
 * @m: Second number to convert to.
 *
 * Return: The number of bits needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	// calculate the bitwise difference between n and m
	unsigned long int diff = n ^ m;
	
	// initialize counter to keep track of the number of flipped bits
	unsigned int counter = 0;

	// iterate over the bits in diff and count the number of 1s
	while (diff != 0)
	{
		counter++;
		// clear the rightmost 1 bit in diff
		diff &= (diff - 1);
	}

	// return the total number of flipped bits
	return counter;
}

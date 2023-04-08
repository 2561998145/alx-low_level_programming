#include "main.h"
#include <stdio.h>

/**
 * flip_bits - Calculates the number of bits that need to be flipped to convert one number to another
 * @n: The first number
 * @m: The second number to convert to
 * Return: The number of bits that need to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
   unsigned long int diff;
	int counter;

	diff = n ^ m;
	counter = 0;

    while (diff!=0)
	{
		counter++;
		diff &= (diff - 1);
	}

	return (counter)
    }

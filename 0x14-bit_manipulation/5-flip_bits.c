#include "main.h"
#include <stdio.h>

/**
 * flip_bits - Calculate the number of bits that need to be flipped to convert one number to another
 * @source: The source number
 * @target: The target number to convert to
 * 
 * Return: The number of bits that need to be flipped
 */
unsigned int flip_bits(unsigned long int source, unsigned long int target)
{
    unsigned long int diff = source ^ target; 
    // Calculate the XOR difference between source and target
    unsigned int counter = 0;
    // Use unsigned int for the counter variable

    // Count the number of set bits in the difference using a loop
    for (unsigned int i = 0; diff != 0; i++)
    {
        diff = diff & (diff - 1);
        counter++;
    }

    return counter;
}

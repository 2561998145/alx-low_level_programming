#include "main.h"
#include <stdio.h>

/**
 * flip_bits - Calculate the number of bits that need to be flipped to convert one number to another
 * @n: The first number
 * @m: The second number to convert to
 * 
 * Return: The number of bits that need to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    unsigned long int diff = n ^ m; // Calculate the XOR difference between n and m
    int counter = 0; // Use int for the counter variable

    // Count the number of set bits in the difference using a loop
    for (int i = 0; i < sizeof(diff) * 8; i++)
    {
        if (((diff >> i) & 1) == 1)
        {
            counter++;
        }
    }

    return counter;
}

#include "main.h"
#include <stdio.h>

/**

flip_bits - Calculate the number of bits that need to be flipped to convert one number to another

@n: The first number

@m: The second number to convert to

Return: The number of bits that need to be flipped
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int diff = n ^ m; // Calculate the XOR difference between n and m
unsigned int counter = 0; // Use unsigned int instead of int for the counter variable

// Count the number of set bits in the difference using Brian Kernighan's algorithm
while (diff)
{
counter++;
diff &= (diff - 1);
}

return counter;
}

#include "main.h"
#include <stdio.h>

/**

flip_bits - calculate the number of bits to be flipped to convert one number to another number

@n: the first number

@m: the second number to be converted to

Return: the number of bits that need to be flipped
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int diff = n ^ m; // calculate the XOR difference between n and m
int counter = 0;

// count the number of set bits in the difference using the Brian Kernighan's algorithm
while (diff != 0)
{
counter++;
diff &= (diff - 1);
}

return counter;
}

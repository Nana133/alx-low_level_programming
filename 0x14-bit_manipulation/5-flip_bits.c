#include "main.h"

/**
 * flip_bits - Count number of bit needed to
 *             flip to get from one number to another.
 * @n: Number
 * @m: Number to flip n to.
 *
 * Return:Necessary number of bits to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}

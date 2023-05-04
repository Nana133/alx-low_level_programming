#include "main.h"
/**
 * get_bit - Get value of a bit at given index.
 * @n: Bit
 * @index: Index to get the value at - indices start at 0.
 *
 * Return: If an error occurs - -1.
 *         Otherwise - The value of bit at index.
 */
int get_bit(unsigned long int c, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((c & (1 << index)) == 0)
		return (0);

	return (1);
}

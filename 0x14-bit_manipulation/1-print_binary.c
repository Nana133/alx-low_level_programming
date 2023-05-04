#include "main.h"

/**
 * print_binary - Print binary representation of a number.
 * @n: Number to be printed in binary.
 */
void print_binary(unsigned long int a)
{
	if (a > 1)
		print_binary(a >> 1);

	_putchar((a & 1) + '0');
}

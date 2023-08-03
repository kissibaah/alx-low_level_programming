#include "main.h"

/**
 * print_binary - prints out the binary equivalent of a decimal number
 * @a: number to be printed in binary
 */
void print_binary(unsigned long int a)
{
	int i, count = 0;
	unsigned long int current;

	for (i = 63; i >= 0; i--)
	{
		current = a >> i;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}

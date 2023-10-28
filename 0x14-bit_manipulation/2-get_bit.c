#include "main.h"

/**
 * get_bit - returns the value of bit at index in a decimal number
 * @number: number to search
 * @index: index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int number, unsigned int index)
{
	int val_bit;

	if (index > 63)
		return (-1);

	val_bit = (number >> index) & 1;

	return (val_bit);
}

#include "main.h"

/**
 * set_bit - sets bit at given index to 1
 * @pointer: pointer to the number to change
 * @index: index of bit to set to 1
 *
 * Return: 1 for success, -1 failure
 */
int set_bit(unsigned long int *pointer, unsigned int index)
{
	if (index > 63)
		return (-1);

	*pointer = ((1UL << index) | *pointer);
	return (1);
}

#include "main.h"

/**
 * clear_bit - sets value of given bit to 0
 * @pointer: pointer to number to change
 * @index: index of the bit to clear
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *pointer, unsigned int index)
{
	if (index > 63)
		return (-1);

	*pointer = (~(1UL << index) & *pointer);
	return (1);
}

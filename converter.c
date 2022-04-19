#include "main.h"

/**
 * get_precision - calculate time to print
 *
 * @format: formatted string
 * @i: List of arguments to be printed
 * @args: list of arguments
 *
 * Return: precision.
 */
char *convert(unsigned long int num, int base, int lowercase)
{
	static char *rep;
	static char buffer[50];
	char *ptr;

	rep = (lowercase)
		? "0123456789abcdef"
		: "0123456789ABCDEF";
	ptr = &buffer[49];
	*ptr = '\0';

	do {
		*--ptr = rep[num % base];
		num /= base;
	} while (num != 0);

	return (ptr);
}

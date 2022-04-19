#include "main.h"

/**
 * print char - Prints a char
 * @types: List of arguments
 * @buffer: Buffer array to handle print
 * @flags: Calculates active flags
 * @width: Width
 * @precision: Precision specifier
 * @size: Size specifier
 *
 * Return: Number of chars printed
 */

int print_char(va_list types, char buffer[], int flags, int width, int precision, int size)
{
char c = va_arg(types, int);

return (handle_write_char(c, buffer, flags, width, precision, size));
}

/**
 * print_string - Prints a string
 * @types: List of arguments
 * @buffer: Buffer array to handle print
 * @flags: Calculates active flags
 * @width: Width.

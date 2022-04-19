#include "main.h"

void print_buff(char buffer[], int *buff_ind);

/**
 * _printf - Prints everything
 * 
 * @format format
 * Return: printed char.
 */
int _printf(const char *format, ...)
{
    int i, printed = 0, printed_chars = 0;
    int flags, width, precision, size, buff_ind = 0;
    va_list args;
    char buffer[BUFF_SIZE];

    if (format == NULL)
        return(-1);

    va_start(args, format);

    for (i = 0; format && format[i] != '\0'; i++)
    {
        if (format[i != '%'])
        {
            buffer[buff_ind++] = format[i];
            printed_chars++;
        }
    }

    print_buff(format, args);

    va_end(args);
}

void print_buff(char buffer[], int *buff_ind)
{
    if (*buff_ind > 0)
        write(1, &buffer[0], *buff_ind);
        buff_ind = 0;
}

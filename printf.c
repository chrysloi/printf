#include <stdio.h>
#include <stdarg.h>

/**
 * print - 
 * 
 * @param format 
 * @param args 
 */
void print(const char *format, va_list args) {
    int state = 0;

    while (*format) {
        if (state == 0) {
            if (*format == '%') {
                state = 1;
            } else {
                putchar(*format);
            }
        } else if (state == 1) {
            switch (*format)
            {
            case 'c':{
                putchar(va_arg(args, int));
                break;
            }
            case 's':{
                const char *s = va_arg(args, const char *);
                while (*s) {
                    putchar(*s++);
                }
                break;
            }
            }

            state = 0;
        }
        
        format++;
    }
    
}

/**
 * _printf - 
 * 
 * @param format 
 * @param ... 
 */
void _printf(const char *format, ...) {
    va_list args;
    va_start(args, format);

    print(format, args);

    va_end(args);
}

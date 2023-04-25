#include "main.h"
/**
 * print_integer - prints integer
 * @ap: variadic parameters
 * Return: number of characters printed
 */
int print_int(va_list ap)
{
        int num = va_arg(ap, int);
        int count = 0;
        int digit = 0;
        int divisor = 1;
        unsigned int abs_num = num;

        if (num < 0)
        {
                abs_num = -num;
                count += write(1, "-", 1);
        }

        while (abs_num / divisor > 9)
                divisor *= 10;

        while (divisor != 0)
        {
                digit = abs_num / divisor;
                count += write(1, &"0123456789"[digit], 1);
                abs_num %= divisor;
                divisor /= 10;
        }

        return (count);
}


#include "main.h"

/**
 * print_binary_rec - a helper function that recursively prints the binary
 *                    representation of an unsigned int
 * @n: the unsigned int to be printed
 * @count: a pointer to an integer that keeps track of the number of digits
 *         printed
 * Return: the number of digits printed
 */
int print_binary_rec(unsigned int n, int *count)
{
    int digits_printed = 0;

    if (n > 1)
    {
        digits_printed += print_binary_rec(n >> 1, count);
        digits_printed += putchar((n & 1) + '0');
        (*count)++;
    }
    else
    {
        digits_printed += putchar(n + '0');
        (*count)++;
    }

    return (digits_printed);
}

#include "main.h"
/**
 * print_binary - prints the binary representation of an unsigned int
 * @args: the va_list that contains the argument to be printed
 * Return: the number of digits printed
 */
int print_binary(va_list args)
{
    unsigned int num = va_arg(args, unsigned int);
    int count = 0;

    count += print_binary_rec(num, &count);
    return (count);
}


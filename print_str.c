#include "main.h"
/**
 * print_str - prints the string
 * @ap: variadic paarmeters
 * Return: number of characters printed
 */
int print_str(va_list ap)
{
	char *str = va_arg(ap, char *);
	int count = 0;
	while (str[count])
		count++;
	return (write(1, str, count));
}



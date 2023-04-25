#include "main.h"
/**
 * print_str - prints the string
 * @ap: variadic paarmeters
 * Return: number of characters printed
 */
int print_str(va_list ap)
{
	char *str = va_arg(ap, char *);
	if (str == NULL)
		str = "(null)";
	return (write(1, str, strlen(str)));
}



#include "main.h"
/**
 * print_percent - prints the string
 * @ap: variadic paarmeters
 * Return: number of characters printed
 */
int print_percent(va_list ap)
{
	(void)ap;
	return (write(1, "%", 1));

}



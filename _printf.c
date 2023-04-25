#include "main.h"
/**
 *
 * _printf - prints out the output
 * @format: character string
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int index = 0;
	int count = 0;
	int value = 0;
	va_list ap;

	int (*f)(va_list);

	va_start(ap, format);

	if (format == NULL)
		return (-1);

	while (format[index])
	{
			if (format[index] != '%')
			{
				value = write(1, &format[index], 1);
				count = count + value;

			}
			else
			{
			f = _specifier(&format[index + 1]);
			if (f != NULL)
				{
					value = f(ap);
					count = value + count;
				}
			else if (format[index + 1] != '\0')
				{
					value = write(1, &format[index + 1], 1);
					count = count + value;
				}
				index++;
			}
			index++;
	
		}
	va_end(ap);

	return (count);
}

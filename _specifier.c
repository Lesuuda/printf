#include "main.h"

/**
 * _specifier - checks for the required specifir
 * @format: pointer to a string
 * Return: count
 */

int (*_specifier(const char *format))(va_list)
{
	int i;

	func_t my_specifiers[4] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_percent},
		{NULL, NULL}
	};
	for (i = 0; my_specifiers[i].t != NULL; i++)
	{
		if (*(my_specifiers[i].t) == *format)
		{
			return (my_specifiers[i].f);
		}
	}
	return (0);
}

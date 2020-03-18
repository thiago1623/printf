#include "holberton.h"
/**
 * print_binary - prints binary
 * @a: binary
 * Return: char*
 */
char *print_binary(va_list a)
{
	char *y = return_binary(va_arg(a, int));

	return (y);
}
/**
 * _printf - our own f*kin printf
 * @format: tipe of format to print
 * Return: How many characters the string has
 */
int _printf(const char * const format, ...)
{
	int i, j, f, g;
	char *buffer, *d;
	va_list args;
	fmt_type match[] = {{'c', print_char}, {'i', print_int},
		{'s', print_string}, {'b', print_binary}, {'\0', NULL}};

	va_start(args, format);
	i = 0, f = 0;
	buffer = malloc(2048);
	while (format && format[i])
	{
		j = 0;
		while (match[j].c)
		{
			if (format[i] == '%' && format[i + 1] == match[j].c)
			{
				i++, d = match[j].f(args);
				for (g = 0; d[g]; g++, f++)
					buffer[f] = d[g];
				break;
			}
			else if (format[i] == '%' && format[i + 1] == '%')
				i++, buffer[f] = format[i], f++, i++;
			j++;
		}
		if (format[i] != match[j].c)
			buffer[f] = format[i], f++;
		i++;
	}
	write(1, buffer, f);
	va_end(args);
	free(buffer);
	return (f);
}

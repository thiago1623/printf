#include "holberton.h"
/**
 * print_binary - prints binaryfgd
 * @a: binaryghfg
 * Return: char*
 */
char *print_binary(va_list a)
{
	char *y = return_binary(va_arg(a, int));

	return (y);
}
/**
 * return_octal - our own f*kin printf
 * @n: tipe of format to print
 * Return: How many characters the string has
 */
char *return_octal(int n)
{
	char *a = NULL, *copy_a = NULL;
	int i = 0, j = 0, k = 0, base = 8;
	int f = n;

	while (f > 0)
	{
		f /= base;
		++i;
	}
	a = malloc(sizeof(char) * (i + 1));
	copy_a = malloc(sizeof(char) * (i + 1));
	if (!copy_a || !a)
	{
		free(a);
		free(copy_a);
		return (NULL);
	}
	i = 0, k = 0, f = n;
	while (f > 0)
	{
		a[i] = f % base + 48;
		f /= base;
		++i;
	}
	for (j = i - 1; j >= 0; j--, k++)
	{
		copy_a[k] = a[j];
	}
	copy_a[k] = '\0';
	return (copy_a);
}
/**
 * print_octal - our own f*kin printf
 * @a: tipe of format to print
 * Return: How many characters the string has
 */
char *print_octal(va_list a)
{
	char *y = return_octal(va_arg(a, int));

	return (y);
}
/**
 * _printf - our own f*kin printf
 * @format: tipe of format to print
 * Return: How many characters the string hasexis
 */
int _printf(const char * const format, ...)
{
	int i = 0, j = 0, f = 0, g = 0;
	char *buffer = NULL, *d = NULL;
	va_list args;
	fmt_type match[] = {{'c', print_char}, {'i', print_int},
		       {'d', print_int}, {'s', print_string},
			    {'b', print_binary}, {'o', print_octal},
			    {'\0', NULL}};

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

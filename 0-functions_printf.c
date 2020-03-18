#include "holberton.h"
/**
 * return_binary - print_binary
 * @n: to  covert to binary
 * Return: char
 */
char *return_binary(int n)
{
	char *a, *copy_a;
	int i = 0, j, k, base = 2;
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
 * print_char - prints char
 * @a: char to concatenate to buffer
 * Return: char to concatenate to buffer
 */
char *print_char (va_list a)
{
	char strg[2];
	char *s;

	strg[0] = va_arg(a, int);
	strg[1] = '\0';
	s = strg;
	return (s);
}
/**
 * print_string - print_string
 * @a: to print
 * Return: string
 */
char *print_string(va_list a)
{
	char *x = NULL;

	x = va_arg(a, char *);
	return (x);
}
/**
 * return_integer - returns integer
 * @n: integer to pass to string
 * Return: string of integers
 */
char *return_integer(int n)
{
	int i, j, count = 0, big, small, h = 1, potencia = 1;
	char *integer;

	if (n == 0)
	{
		integer = malloc(2), integer[count] = 48;
		if (!integer)
		{
			free(integer);
			return (NULL);
		}
		integer[count + 1] = '\0';
		return (integer);
	}
	if (n < 0)
		count++;
	for (i = 0; h != 0; i++)
		h = n / potencia, potencia = potencia * 10;
	potencia = potencia / 100;
	for (j = (i - 1); j != 0; j--, count++)
		big = n / potencia, small = big % 10, potencia = potencia / 10;
	integer = malloc((count + 1) * sizeof(char));
	if (!integer)
	{
		free(integer);
		return (NULL);
	}
	count = 0, potencia = 1, h = 1;
	if (n < 0)
		integer[count] = '-', n = n * -1, count++;
	for (i = 0; h != 0; i++)
		h = n / potencia, potencia = potencia * 10;
	potencia = potencia / 100;
	for (j = (i - 1); j != 0; j--, count++)
	{
		big = n / potencia, small = big % 10, potencia = potencia / 10;
		integer[count] = small + 48;
	}
	integer[count] = '\0';
	return (integer);
}
/**
 * print_int - prints integer
 * @a: type of format to print
 * Return: integer
 */
char *print_int(va_list a)
{
	char *x = return_integer(va_arg(a, int));

	return (x);
}

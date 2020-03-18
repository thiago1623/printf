#include "holberton.h"
/**
 * return_hexa - hexa
 * @n: ene
 * Return: hexa in string
 */
char *return_hexa(int n)
{
	char *a = NULL, *copy_a = NULL;
	int i = 0, j = 0, k = 0, base = 16;
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
		if (f % base > 9)
			a[i] = f % base + 48 + 39;
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
 * print_hexa - our own f*kin printf
 * @a: tipe of format to print
 * Return: How many characters the string has
 */
char *print_hexa(va_list a)
{
	char *y = return_hexa(va_arg(a, int));

	return (y);
}
/**
 * return_Hexa - hexa
 * @n: ene
 * Return: hexa in string
 */
char *return_Hexa(int n)
{
	char *a = NULL, *copy_a = NULL;
	int i = 0, j = 0, k = 0, base = 16;
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
		if (f % base > 9)
			a[i] = f % base + 48 + 7;
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
char *print_Hexa(va_list a)
{
	char *y = return_Hexa(va_arg(a, int));

	return (y);
}

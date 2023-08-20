#include "main.h"
#include <stddef.h>
/**
 * _putchar - prints a single character
 * @c: character to print
 * Return: printed character
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_char - prints a character
 * @list: va_list
 * Return: no of characters printed
 */
int print_char(va_list list)
{
	return (_putchar(va_arg(list, int)));
}

/**
 * print_string - prints a string
 * @list: va_list
 * Return: printed characters
 */
int print_string(va_list list)
{
	char *str = va_arg(list, char *);
	int len = 0;

	if (str == NULL)
	{
		return (_printf("(null)"));
	}
	while (*str)
	{
		len += _putchar(*str);
		str++;
	}
	return (len);

}

/**
 * _printf - our printf function
 * @format: string format
 * Return: printed characters
 */
int _printf(const char *format, ...)
{
	int i;
	int printed_chars = 0;
	va_list list;

	if (format == NULL)
		return (-1);
	va_start(list, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
			printed_chars += _putchar(format[i]);
		else
		{
			i++;
			if (format[i] == '\0' || format[i] == ' ')
			{
				va_end(list);
				return (-1);
			}
			switch (format[i])
			{
				case 'c':
					printed_chars += print_char(list);
					break;
				case 's':
					printed_chars += print_string(list);
					break;
				case '%':
					printed_chars += _putchar('%');
					break;
				default:
					printed_chars += _putchar('%');
					printed_chars += _putchar(format[i]);
					break;
			}
		}
	}
	va_end(list);

	return (printed_chars);
}

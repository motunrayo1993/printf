#include "main.h"

/**
 * _printf - prints and input into the standard output 
 * @format: the format string
 *
 * Return: number of bytes printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, j = 0;
	int n_show = 0;

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		_putchar(format[i];
		n_show++;
		else
		{
	/* format[i] == '%' */
			if (format[i + 1] == 'c')
                {
                _putchar(va_arg(args, int));
		n_show++
		i++;
		}
		else if (format[i] == 's')
		{
		i++;
		str = va_arg(args, char *);
		j = 0;
		while (str[j] != '\0')
		{
			_putchar(str[j];
			n_show++;
			j++;
			}
			}
			else if (format[i + 1] == '%')
			{
				i++;
			_putchar('%');
			n_show++;
			}
			}
			
			i++;
		}
	
	va_end(args);
	return (n_show);
}

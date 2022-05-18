#include <stdarg.h>
#include "main.h"
#include <stddef.h>

/**
 * _printf - Recreate behavior of printf function
 * @format: format string
 * Return: value of printed chars
 */

int _printf(const char *format, ...)
{
	int (*pfunc)(va_list, flags_t *);
  va_list args;
	const char *ptr;
	flags_t flags = {0, 0, 0};

	register int sum = 0;

	va_start(args, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (a = format; *ptr; a++)
	{
		if (*ptr == '%')
		{
			a++;
			if (*ptr == '%')
			{
				sum += _putchar('%');
				continue;
			}
			while (get_flag(*ptr, &flags))
				a++;
			pfunc = get_print(*ptr);
			sum += (pfunc)
				  pfunc(args, &flags)
				  _printf("%%%c", *ptr);
		} else
			sum += _putchar(*p);
	}
	_putchar(-1);
	va_end(args);
	return (sum);
}

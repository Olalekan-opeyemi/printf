#include "main.h"
#include <stdarg.h>
/**
* _printf - prints out formated output.
* @...: variadic function
* @format: string to be printed out.
* Return: 0;
*/
int _printf(const char *format, ...)
{
	unsigned int k, r_string = 0, v_prints = 0;
	va_list prints;

	va_start(prints, format);
	for (k = 0; format[k] != '\0'; k++)
	{
		if (format[k] != '%')
		{
			put_cha(format[k]);
		}
		else if (format[k + 1] == 'c')
		{
			put_cha(va_arg(prints, int));
			k++;
		}
		else if (format[k + 1] == 's')
		{
			v_prints = _puts(va_arg(prints, char *));
			k++;
			r_string += (v_prints - 1);
		}
		else if (format[k + 1] == '%')
		{
			put_cha(format[k]);
			k++;
		}
		else if (format[k + 1] == 'd' || (format[k + 1] == 'i'))
		{
			int_specifier(va_arg(prints, int));
			k++;
		}
		r_string += 1;
	}
	va_end(prints);
	return (r_string);
}

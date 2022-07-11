#include <stdarg.h>
#include <main.h>
/**
 * _printf - prints out a formated string
 * @format: string to print out
 * @...: variadic parameters
 *
 * Return: number of characters to be printed/
 */

int _printf(const char *format, ...)
{
	int i = 0;
	int count = 0;
	int value = 0;
	va_list args;
	va_start(args, format);

	/*prevent parsing a null pointer*/
	if (format == NULL)
		return (-);

	/*print each character of string*/
       while (format[i])
       {
		if (format[i] != '%')
		{
			value = write(1,&format[i],1);
			count = count + value;
			i++;
			continue;
		}

		if (format[i] == '%')
		{
			//expressions;
		}
       }

       return (count);
}


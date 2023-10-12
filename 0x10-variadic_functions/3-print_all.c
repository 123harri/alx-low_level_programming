#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints values based on a format string.
 * @format: The format string containing format specifiers.
 *          'c': char, 'i': integer, 'f': float, 's': char*
 *          Any other characters are ignored.
 * @...: Variable arguments based on the format string.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;
	int num;
	float fnum;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
				{
				case 'c':
				printf("%c", va_arg(args, int));
				break;
				case 'i':
				num = va_arg(args, int);
				printf("%d", num);
				break;
				case 'f':
				fnum = va_arg(args, double);
				printf("%f", fnum);
				break;
				case 's':
				str = va_arg(args, char *);
				if (str == NULL)
				str = ("(nil)");
				printf("%s", str);
					break;
				}
if ((format[i + 1] != '\0') && (format[i] == 'c' || format[i] == 'i' ||
format[i] == 'f' || format[i] == 's'))
	printf(", ");
i++;
	}
	va_end(args);
	printf("\n");
}

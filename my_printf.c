#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include "my_printf.h"

char* my_chardup(const char c)
{
	static char buffer[2];
	buffer[0] = c;
	buffer[1] = '\0';
	return buffer;
}

char my_putchar(const char c)
{
	write(1, my_chardup(c), 1);
	return c;
}

size_t my_strlen(const char* str)
{
	size_t count = 0;
	while(str[count] != '\0')
	{
		count++;
	}
	return count;
}

int my_puts(const char* str)
{
	size_t len = my_strlen(str);
	if(len < 1)
	{
		return -1;
	}
	write(1, str, len);
	my_putchar('\n');
	return 0;
}

void my_putint(int num)
{
	char buffer[12];
	int i = 10;
	buffer[11] = '\0';
	int is_negative = 0;

	if(num < 0)
	{
		is_negative = 1;
		num = -num;
	}

	do
	{
		buffer[i--] = '0' + (num % 10);
		num /= 10;
	} while(num > 0);

	if(is_negative)
	{
		buffer[i--] = '-';
	}

	my_puts(&buffer[i + 1]);
}

void my_putdouble(double num)
{
	char buffer[50];
	int len = snprintf(buffer, sizeof(buffer), "%lf", num);
	if(len > 0)
	{
		write(1, buffer, len);
	}
}

int my_printf(const char* fmt, ...)
{
	va_list args;
	va_start(args, fmt);

	while(*fmt)
	{
		if(*fmt == '%')
		{
			fmt++;
			switch(*fmt)
			{
				case 's':
				{
					char* str = va_arg(args, char*);
					my_puts(str);
					break;
				}
				case 'd':
				{
					int num = va_arg(args, int);
					my_putint(num);
					break;
				}
				case 'f':
				{
					double num = va_arg(args, double);
					my_putdouble(num);
					break;
				}
				case 'c':
				{
					char c = (char) va_arg(args, int);
					my_putchar(c);
					break;
				}
				default:
					my_putchar('%');
					my_putchar(*fmt);
					break;
			}
		}
		else
		{
			my_putchar(*fmt);
		}
		fmt++;
	}

	va_end(args);
	return 0;
}

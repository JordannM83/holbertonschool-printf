#include <stdarg.h>
#include "main.h"



int _printf(const char *format, ...)
{
	va_list args;
	int len = 0;
	int i; 
	
	print_t format[] = {
		{"c", fonction},
		{"s", fonction},
		{"%", fonction},
	}

	va_start(args, format);








	va_end(args);
	return(len);
}

#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
*print_all - Prints all of the arguments based on the format.
*@format: A string specifying the necessary operations.
*/
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0;
char *str;
va_start(args, format);
while (format && format[i])
{
switch (format[i])
{
case 'c':
printf("%c", va_arg(args, int));
break;
case 'i':														printf("%i", va_arg(args, int));
break;
case 'f':
printf("%f", va_arg(args, double));
break;															case 's':														str = va_arg(args, char*);
if (str == NULL)													str = "(nil)";
printf("%s", str);
break;															default:
break;
}
if (format[i + 1])													printf(", ");														i++;
}
printf("\n");
va_end(args);
}

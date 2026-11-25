#include "main.h"

int print_string(va_list args)
{
	char *str;
	int len;
	str = va_arg(args,char *);

	len = _strlen(str);
	return(write(1,str,len));
}

int print_c(va_list args)
{
	char c = va_arg(args, int);
	return(write(1,&c,1));
}

int print_percent(va_list args __attribute__((unused)))
{
 return write(1,"%",1);
}

int print_integer(va_list args __attribute__((unused)))
{
	return(0);
}

int print_decimal(va_list args __attribute__((unused)))
{
	return(0);
}
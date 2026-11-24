#include "main.h"

int print_string(char * s)
{
	int len = _strlen(s);
	return(write(1,s,len));
}

int print_c(char * s)
{
	return(write(1,s,1));
}

int _print_percent(char * s)
{
 
}

void print_integer(char * s)
{
	
}

void print_decimal(char * s)
{
	
}
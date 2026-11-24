#include <string.h>
#include <unistd.h>
#include "main.h"

/**
 *
 */
int _printf(char * a)
{
	int len = _strlen(a);
	return(write(1,a,len));
}

/**
 *
 */
int main()
{
	_printf("fsfvfo esihfeilfug  ifgfieygofgfids\n");
	return (0);
}

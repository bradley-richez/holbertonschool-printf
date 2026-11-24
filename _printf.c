#include <string.h>
#include <unistd.h>
#include "main.h"
#include <stdarg.h>

/**
 *
 */

int _printf(const char *format, ...)
{
  va_list args; 

  specifier_t specifier = {
    {'c', print_c},
    {NULL,NULL}
  };

  if (format == NULL)
  {
    return (NULL);
  }
  
  va_start(args,format);
  va_end(args);
}


/**
 *
 */
int main()
{
	_print_string("fsfvfo esihfeilfug  ifgfieyg%%ofgfids\n");
	return (0);
}

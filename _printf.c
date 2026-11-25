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
  int text = 0;

  if (format == NULL)
  {
    return (-1);
  }
  
  va_start(args,format);
  /**
   * format[i] == "%"
   * format[i] == "\0"
   * 
   * 
   */
  
  va_end(args);
  return (text);
}


/**
 *
 */
int main()
{
	_printf("fsfvfo esihfeilfug  ifgfieyg%%ofgfids\n");
	return (0);
}

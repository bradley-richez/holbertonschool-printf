
#include <string.h>
#include <unistd.h>
 int _printf(char * a)
{
    int len = strlen(a);
  return(write(1,a,len));
}
int main()
{
_printf("fsfvfo esihfeilfug  ifgfieygofgfids\n");
}
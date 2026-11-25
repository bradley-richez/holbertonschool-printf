#include "main.h"
int (*get_specifier(const char *s))(va_list)
{
    specifier_t specifier[] = {
        {"c",print_c},
        {"s",print_string},
        {"%",print_percent},
        {NULL,NULL}
    };

    int i = 0;

    while (specifier[i].spe != NULL && *(specifier[i].spe) != *s)
    {
        i++;
    }

    return (specifier[i].f);
}
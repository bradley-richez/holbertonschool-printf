#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
/**
 * struct specifier - Struct specifier + function
 * @spe: specifier
 * @f: function
 */

typedef struct specifier {
	char *spe;
	int (*f)(va_list);
}specifier_t;


int _strlen(char *s);

int _printf(const char *format, ...);

int (*get_specifier(const char *s))(va_list);

int print_string(va_list args);
int print_c(va_list args);
int print_integer(va_list args);
int print_decimal(va_list args);
int print_percent(va_list args);
#endif

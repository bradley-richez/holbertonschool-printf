#ifndef MAIN_H
#define MAIN_H

/**
 * struct specifier - Struct specifier + function
 * @spe: specifier
 * @f: function
 */

typedef struc specifier {
	char spe;
	int (*f)(char *);
}specifier_t;


int _strlen(char *s);

int _printf(const char *format, ...);

int print_string(char * s);
int print_c(char * s);
int print_integer(char * s);
int print_decimal(char * s);
int _print_string(char * s);
#endif

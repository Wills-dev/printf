#ifndef _MAIN_H_
#define _MAIN_H_

int _printf(const char *format, ...);
int (*check_specifier(char*))(va_list);

/**
 * struct func - struct for specifier to printer
 * @t: charatcer to compare
 * @f: function to handle printing
 */
typedef struct func
{
	char *t;
	int (*f)(va_list);
} func_t;

#endif

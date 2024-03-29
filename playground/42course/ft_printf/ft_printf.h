#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <limits.h>
#include <string.h>
#include <stdlib.h>

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

int ft_printf(const char *format, ...);
int ft_print_c(va_list *args);
int ft_print_s(va_list *args);
int ft_print_i(va_list *args);
int ft_print_percentage(va_list *args);
int ft_print_p(va_list *args);
int ft_print_u(va_list *args);
int ft_print_lowercase_x(va_list *args);
int ft_print_uppercase_X(va_list *args);

#endif

#include<stdio.h>
#include<string.h>
// ex00 char *ft_strcpy(char *destination, char *source);
// ex01 char *ft_strncpy(char *dest, char *src, unsigned int n);
 int ft_str_is_alpha(char *str);
// ex03 int    ft_str_is_numeric(char *str);
// ex04 int    ft_str_is_lowercase(char *str);
// ex05 int    ft_str_is_uppercase(char *str);
// ex06 int    ft_str_is_printable(char *str);
// ex07 char    *ft_strupcase(char *str);
// ex08 char    *ft_strlowcase(char *str);
// ex09 char    *ft_strcapitalize(char *str);
// ex10 unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size);

int main(void)
{
    char src[] = "source text";
    char dest[] = "destination text";
    ft_strlcpy(dest, src, sizeof(dest));
    printf("destination: %s\n", dest);
    return(0);
}

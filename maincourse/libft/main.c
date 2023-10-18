/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:28:07 by hzhukov           #+#    #+#             */
/*   Updated: 2022/12/15 16:35:04 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	ft_putchar_fd(char c, int fd);
void	*ft_memmove(void *dst, const void *src, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int		ft_atoi(const char *nptr);
void	*ft_calloc( size_t num, size_t size );
char	*ft_strdup( const char *str1 );
char	*ft_substr(const char *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);



// ft_isalpha	int main(void)	{	for (int i = 0; i < 128; i++) { printf("%c - %d\n", i, ft_isalpha(i)); } return 0; }
// ft_isdigit	int main(void)	{	for (int i = 0; i < 128; i++) { printf("%c - %d\n", i, ft_isdigit(i)); } return 0; }
// ft_isalnum	int main(void)	{	for (int i = 0; i < 128; i++) { printf("%c - %d\n", i, ft_isalnum(i)); } return 0; }
// ft_isascii	int main(void)	{	for (int i = -256; i <= 256; i++) { printf("%d - %d\n", i, ft_isascii(i)); } return 0; }
// ft_isprint	int main(void)	{	for (int i = 0; i < 128; i++) { printf("%d - %d\n", i, ft_isprint(i)); } return 0; }
// ft_strlen	int	main(void)	{	char *str; int result; str = "Hello"; result = ft_strlen(str); printf ("%d", result); return (0); }
// ft_memset	int	main(void)	{	char str1[] = "Hello World ft_memset"; char str2[] = "Hello World memset"; ft_memset (str1, '-', 5); puts (str1); memset (str2, '-', 5); puts (str2); return (0); }
// ft_memcpy	int main(void)	{	char src[] = "memcpy"; char src2[] = "ft_memcpy"; char dst[7]; printf("Destination before    memcpy: %s\n", dst); memcpy(dst, src, sizeof(src)); printf("Destination after     memcpy: %s\n", dst); ft_bzero(dst, sizeof(dst)); printf("Destination before ft_memcpy: %s\n", dst); ft_memcpy(dst, src2, sizeof(src2)); printf("Destination after  ft_memcpy: %s\n", dst); return 0;}
// ft_memmove	int main(void)	{	char str1[11] = "123456789";	char str2[11] = "123456789";    printf("origin string: %s\n", str1);	printf("origin string: %s\n", str2); memcpy(str1 + 1, str1, sizeof(int)*3);    printf("mcpy overlap:  %s\n", str1); memmove(str2 + 1, str2, sizeof(int)*3);    printf("move overlap:  %s\n", str2);    return 0;}
// ft_strclpy	int main(void)	{	char src[] = "-----";	char dst[] = "Hello";	printf("dst before: %s\n", dst);	ft_strlcpy(dst, src, 1);	printf("dst after : %s\n", dst);}
// ft_memchr	int main(void)	{	char str[] = "This is a sample string";    char * pch;    printf ("Looking for the 's' character in \"%s\"...\n",str);    pch=ft_memchr(str,'s',ft_strlen(str));    while (pch!=NULL)    {        printf ("found at %ld\n",pch-str+1);        pch=ft_memchr(pch+1,'s', ft_strlen(pch+1));    }    return 0;}
// ft_strlcat	int main(void)	{     char src[] = "";     char dest[] = "Hello";     size_t dstsize = 10;     printf("%lu\n", ft_strlcat(dest, src, dstsize));     return 0;}
// ft_toupper	int main(int argc, char **argv) {    char c;    printf("Please enter a character: \n");    scanf("%c", &c);    c = ft_toupper(c);    printf("The uppercase version is: %c \n", c);}
// ft_tolower 	int main(int argc, char **argv) {    char c;    printf("Please enter a character: \n");    scanf("%c", &c);    c = ft_tolower(c);    printf("The lowerrcase version is: %c \n", c);}
// ft_strchr	int main(void)	{	char string[] = "Hello World";	char ch = 'W';	char *ptr = ft_strchr(string, ch);	printf("before: %s \n", string);	printf("after: %s\n", ptr);	return 0;}
// ft_substr
int main(void){	char str[] = "Hello World!";	char *substr;	substr = ft_substr(str, 6, 2);	printf("%s\n", substr);	free(substr);	return (0);}


/*
// ft_strrchr 		int main(void)	{	char string[] = "This is a string";    char ch = 's'; char *result;    result = ft_strrchr(string, ch);    printf("%s\n", result);    return 0;}
// ft_strncmp		int main(void)	{	int result;    const char str1[] = "abcdef";    const char str2[] = "abcdefghijklmnop";     result = ft_strncmp(str1, str2, 6);     if ( result < 0 )     {        printf("str1 is less than str2\n");    }     else if ( result > 0 )     {        printf("str2 is less than str1\n");    }     else     {        printf("str1 is equal to str2\n");    }     return 0;}
// ft_memcmp		int main(void)	{     // define two strblocks of memory     char str1[] = "abcdef";     char str2[] = "abcdez";       int result;     result = ft_memcmp(str1, str2, 6);    printf("result : %d\n", result);    return 0; }
// ft_strnstr		int main(void)	{     const char s[] = "FUCK YOU LOVE strnstr!!!";     const char find[] = "L";     size_t slen = 11;       char* result = ft_strnstr(s, find, slen);     printf("%s\n", result);    return 0; }
// ft_atoi			int main(int argc, char *argv[]){	if (argc == 2)	{		printf("%d\n", ft_atoi(argv[1]));	}	return 0;}
// ft_calloc		int main(void	{    int *p1 = ft_calloc(4, sizeof(int));    int *p2 = ft_calloc(1, sizeof(int[4]));    int *p3 = ft_calloc(4, sizeof *p3);     if(p2) {        for(int n=0; n<4; ++n)            printf("p2[%d] == %d\n", n, p2[n]);    }     free(p1);    free(p2);    free(p3);}
// ft_strdup		int main(void)	{    char *str1 = "Hello World!";    char *str2;    str2 = ft_strdup(str1);    printf("str1: %s\n", str1);    printf("str2: %s\n", str2);        free(str2);    return 0;}
// ft_strjoin  		int main(void)	{	char s1[] = "Hello";	char s2[] = "World!";	char *str;	str = ft_strjoin(s1, s2);	printf("%s\n", str);	free(str);	return (0);}
// ft_strtrim		int main(int argc, char **argv){	if (argc == 3)	{		char *result;		result = ft_strtrim(argv[1], argv[2]);		printf("%s", result);		free(result);	}	return 0;}
// ft_split			int main(void)	{     char a[] = "This is a sample string for testing";     int i;           char** result = ft_split(a, ' ');       for (i=0; result[i]; i++)         printf("%s\n", result[i]);       return 0; }
// ft_itoa			int	main(void)	{	int num = -0;	char *stringNumber = ft_itoa(num);	printf("The integer %d is converted to string as %s\n", num, stringNumber );	free(stringNumber);	return 0;}
// ft_strmapi		int main(void)	{    char s[] = "This is a string";    char (*f) (unsigned int, char) = &change;    char *newString = ft_strmapi(s, f);    printf("Original string: %s\n", s);    printf("New string: %s\n", newString);    free(newString);    return 0;}
// ft_putchar_fd	int main(int argc, char **argv){	int fd = open("myfile", O_WRONLY | O_CREAT);	ft_putchar_fd('c', fd);	close(fd);	return 0;}
// ft_putstr_fd		int	main(void)	{	char str[] = "Hello World!";	int fd = 1;	ft_putstr_fd(str, fd);	return (0);}
// ft_putendl_fd	int main(void	{   char *s = "Hello World!";    int fd = 1;    ft_putendl_fd(s, fd);    return 0; }
// ft_putnbr_fd		int main(void)	{	ft_putnbr_fd(-1567, 1);	return 0;}
// ft_striteri		int main(void)	{    char str[] = "Hello World";    ft_striteri(str, &func);    return 0;}
// ft_split			int main(void)	{	char a[] = "This is a sample string for testing";	int i;	char** result = ft_split(a, ' ');	for (i=0; result[i]; i++)         printf("%s\n", result[i]);       return 0; }
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:28:07 by hzhukov           #+#    #+#             */
/*   Updated: 2022/12/15 15:22:43 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *s, int c, size_t n);
void ft_bzero(void *s, size_t n); 
//void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n); 
//void ft_memmove(void *dst, const void *src, size_t n); 
//size_t ft_strlcpy(char *dst, const char *src, size_t size); 
//size_t ft_strlcat(char *dst, const char *src, size_t size); 
//int ft_toupper(int c); 
//int ft_tolower(int c); 
//char *ft_strchr(const char *s, int c); 
//char *ft_strrchr(const char *s, int c); 
//int ft_strncmp(const char *s1, const char *s2, size_t n);
//void *ft_memchr(const void *s, int c, size_t n); 
//int ft_memcmp(const void *s1, const void *s2, size_t n); 
//char *ft_strnstr(const char *haystack, const char *needle, size_t len);
//int ft_atoi(const char *nptr); 
//void *ft_calloc( size_t num, size_t size );
//char *ft_strdup( const char *str1 );
//char *ft_substr(char const *s, unsigned int start, size_t len);
//char *ft_strjoin(char const *s1, char const *s2);
//char *ft_strtrim(char const *s1, char const *set);
//char **ft_split(char const *s, char c);
//char *ft_itoa(int n);
//char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
//void ft_striteri(char *s, void (*f)(unsigned int, char*));
//void ft_putchar_fd(char c, int fd);
//void ft_putstr_fd(char *s, int fd);
//void ft_putendl_fd(char *s, int fd);
//void ft_putnbr_fd(int n, int fd);


// isalpha int	main(void){char c = '1'; printf("%d", ft_isalpha(c)); 	return (0); }
// isdigit int	main(void){char c = 'a'; printf("%d", ft_isdigit(c)); 	return (0); }
// isalnum int	main(void){char c = '!'; printf("%d", ft_isalnum(c)); 	return (0); }
// isascii int	main(void){char c = 'a'; printf("%d", ft_isascii(c)); 	return (0); }
// isprint int	main(void){char c = 'a'; printf("%d", ft_isprint(c)); 	return (0); }
// strlen int	main(void){char *str; int result; str = "Hello"; result = ft_strlen(str); printf ("%d", result); return (0); } 
// strcpy int	main(void){char str[50]; strcpy(str, "This is string.h library function"); puts(str); memset(str, '-', 7); puts(str); return (0); }
// memset int	main (void){char str1[] = "Fuck hello ft_memset"; char str2[] = "Fuck hello memset"; ft_memset (str1, '-', 5); puts (str1); memset (str2, '-', 5); puts (str2); return (0); }
// ft_bzero
int main(void) 
{ 
	char str[] = "bzero"; 
	ft_bzero(str, 4); 
	printf("%s", str); 
	return 0; 
}
// ft_memcpy 
// ft_memmove 
// ft_strlcpy 
// ft_strlcat 
// ft_toupper 
// ft_tolower 
// ft_strchr 
// ft_strrchr 
// ft_strncmp 
// ft_memchr 
// ft_memcmp 
// ft_strnstr 
// ft_atoi 
// ft_calloc 
// ft_strdup 
// ft_substr 
// ft_strjoin  
// ft_strtrim 
// ft_split 
// ft_itoa 
// ft_strmapi 
// ft_striteri  
// ft_putchar_fd 
// ft_putstr_fd 
// ft_putendl_fd 
// ft_putnbr_fd
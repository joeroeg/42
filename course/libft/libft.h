/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 21:12:19 by hzhukov           #+#    #+#             */
/*   Updated: 2022/12/15 16:22:41 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stddef.h>
# include <stdint.h>
# include <string.h>
# include <limits.h>
# include <sys/stat.h>
# include <fcntl.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *str, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void	ft_putchar_fd(char c, int fd);
void	*ft_memmove(void *dst, const void *src, size_t n);
size_t	t_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char 	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int		ft_atoi(const char *nptr);
void	*ft_calloc(size_t num, size_t size);
//char *ft_strdup( const char *str1 );
//char *ft_substr(char const *s, unsigned int start, size_t len);
//char *ft_strjoin(char const *s1, char const *s2);
//char *ft_strtrim(char const *s1, char const *set);
//char **ft_split(char const *s, char c);
//char *ft_itoa(int n);
//char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
//void ft_striteri(char *s, void (*f)(unsigned int, char*));

//void ft_putstr_fd(char *s, int fd);
//void ft_putendl_fd(char *s, int fd);
//void ft_putnbr_fd(int n, int fd);

#endif
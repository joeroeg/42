/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 21:27:43 by mamartin          #+#    #+#             */
/*   Updated: 2022/11/22 13:45:27 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
# define LIBASM_H

typedef long	ssize_t;

size_t			ft_strlen(const char *s);
char			*ft_strcpy(char *dest, const char *src);
int				ft_strcmp(const char *s1, const char *s2);
ssize_t			ft_write(int fd, const void *buf, size_t count);
ssize_t			ft_read(int fd, void *buf, size_t count);
char			*ft_strdup(const char *s);

#endif
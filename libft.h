/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-cas <juan-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 21:28:29 by juan-cas          #+#    #+#             */
/*   Updated: 2023/09/08 21:28:29 by juan-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#ifndef MYLIBRARY_H
#define MYLIBRARY_H
#define NULL 0

typedef unsigned long size_t;

size_t howbig(void);
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isprint(char c);
int ft_strlcat(char *s1, char *s2, size_t size);
int ft_isprint(char c);
size_t	ft_strlcpy(char *dest, const char *src, size_t sizedest);
size_t	ft_strlen(const char *str);
int ft_tolower(char c);
int ft_toupper(char c);
int ft_isascii(int c);
int ft_isalnum(int c);
void *ft_memset(void *s, int c, size_t n);
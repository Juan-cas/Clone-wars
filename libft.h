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

#ifndef LIBFT_H
# define LIBFT_H
//# define NULL 0

# include <unistd.h>
# include <stdlib.h>

//typedef unsigned long int size_t;

size_t howbig(void);
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isprint(char c);
int ft_strlcat(char *s1, char *s2);
int	ft_isprint(char c);
size_t	ft_strlcpy(char *dest, const char *src, size_t sizedest);
size_t	ft_strlen(const char *str);
int	ft_tolower(char c);
int	ft_toupper(char c);
int	ft_isascii(int c);
int	ft_isalnum(int c);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memmove(void *str1, const void *str2, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t count);
void *ft_memchr(const void *str, int c, size_t n);
void *ft_memset(void *s, int c, size_t n);
int ft_atoi(const char *str);
void ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t number, size_t size);
int ft_isascii(int c);
//int memcmp(const void *buffer1, const void *buffer2, size_t count);

typedef struct s_list
{
void *content;
struct s_list *next;
} t_list;

t_list				*ft_lstnew(void const *content, size_t content_size);

#endif
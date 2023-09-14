/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-cas <juan-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 06:02:26 by juan-cas          #+#    #+#             */
/*   Updated: 2023/09/12 06:02:26 by juan-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void *ft_memchr(const void *str, int c, size_t n)
{
	const unsigned char *str_ptr = str;
	const unsigned char j = (unsigned char)c;

	str_ptr = (char *)str;
	while (n--)
	{
		if (*str_ptr == j)
			return ((void *)str_ptr);
		str_ptr++;
	}
}
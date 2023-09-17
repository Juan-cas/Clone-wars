/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-cas <juan-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 02:18:14 by juan-cas          #+#    #+#             */
/*   Updated: 2023/09/12 02:18:14 by juan-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = 0;
	while (*s)
	{
		if (*s == (unsigned char )c)
			str = (char *)s;
		s++;
	}
	if (*s == (unsigned char)c)
		str = (char *)s;
	if (c == 0)
		str = (char *)s;
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-cas <juan-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 02:32:19 by juan-cas          #+#    #+#             */
/*   Updated: 2023/09/13 02:32:19 by juan-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	size_t	i;

	if (!str1 || !str2)
		return (NULL);
	if (str1 > str2)
	{
		i = (int)n -1;
		while (i--)
			*(char *)(str1 + i) = *(char *)(str2 + i);
	}
	else
	{
		i = 0;
		while (i++ < n)
			*(char *)(str1 + i) = *(char *)(str2 + i);
	}
	return (str1);
}

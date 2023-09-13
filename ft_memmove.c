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

void *memmove(void *str1, const void *str2, size_t n)
{
	char *ptr1 = (char*)str1;
	char *ptr2 = (char*)str2;
	size_t i;

	if (!ptr1 || !ptr2)
		return (NULL);
	i = 0;
	while (ptr1[i] || ptr2[i] && i < n)
	{
		ptr1[i] = ptr2[i];
		i++;
	}
	ptr1[i] = 0;
	return ((void*)ptr1);
}
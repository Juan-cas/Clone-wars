/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-cas <juan-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 21:26:01 by juan-cas          #+#    #+#             */
/*   Updated: 2023/09/12 21:26:01 by juan-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_calloc(size_t number, size_t size)
{
	void	*str;

	str = (void*)malloc(number * size);
	if (!str)
		return NULL;
	ft_bzero(str, number);
	return (str);	
}
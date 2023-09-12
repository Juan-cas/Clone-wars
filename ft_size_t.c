/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_size_t.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-cas <juan-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 21:39:42 by juan-cas          #+#    #+#             */
/*   Updated: 2023/09/08 21:39:42 by juan-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t howbig(void)
{
	size_t count;
	size_t size;
	int i;

	i = 0;
	count = 0;
	size = sizeof(int);
	while (i < size)
	{
		i++;
		count++;
	}
	return (count);
}
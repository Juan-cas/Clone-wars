/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-cas <juan-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 07:21:38 by juan-cas          #+#    #+#             */
/*   Updated: 2023/09/12 07:21:38 by juan-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int memcmp(const void *buffer1, const void *buffer2, size_t count)
{
	size_t i;
	unsigned char buffera = (unsigned char *)buffer1;
	unsigned char bufferb = (unsigned char *)buffer2;
	
	while(count-- && buffera++ && bufferb++)
	{
		if (buffera != bufferb)
			return ((int)buffera - (int)bufferb);
	}
	return ((int)buffera - (int)bufferb);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-cas <juan-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 07:19:21 by juan-cas          #+#    #+#             */
/*   Updated: 2023/09/13 07:19:21 by juan-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char *ft_itoa(int n)
{
	char *str;

	if (n == '\0')
		return (NULL);
	if (n > 9)
		n / 10;
	
	
}
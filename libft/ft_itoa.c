/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: juan-cas <juan-cas@student.42.fr>          +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2023/09/13 07:19:21 by juan-cas          #+#    #+#             */
/*   Updated: 2023/09/13 07:19:21 by juan-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int	count(int n)
{
	int i = 0;
	if (n < 0)
	{
		n *= -1;
		i += 1;
	}
	while (n >= 10)
	{
		n = n / 10;
		i += 1;
	}
	return (i + 1);
}

char	*ft_itoa(int n)
{
	size_t size;
	char *str;
	int is_negative = 0;

	if (n == -2147483648)
	{
		str = (char *)malloc(sizeof(char) * 12);
		if (str == NULL)
			return (NULL);
		strcpy(str, "-2147483648");
		return (str);
	}

	if (n == 0)
	{
		str = (char *)malloc(sizeof(char) * 2);
		if (str == NULL)
			return (NULL);
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}

	if (n < 0)
	{
		n *= -1;
		is_negative = 1;
	}

	size = count(n) + is_negative;
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (str == NULL)
		return (NULL);

	str[size] = '\0';
	while (n != 0)
	{
		str[--size] = (n % 10) + '0';
		n = n / 10;
	}

	if (is_negative)
		str[0] = '-';

	return (str);
}

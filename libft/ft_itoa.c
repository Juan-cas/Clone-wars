/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-cas <juan-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 03:18:12 by juan-cas          #+#    #+#             */
/*   Updated: 2023/09/19 03:18:12 by juan-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

int count (int n)
{
    int i;

    i = 0;
    if (n < 0)
    {
        n *= -1;
        i++;
    }
    if (n > 9)
    {
        n = n / 10;
        i++;        
    }
	i++;
    return (i);
}

char *writter(char *str, int n)
{
	int	i;

	i = count(n);
	if (n < 0)
	{
		str[0] = '-';
		n = n * -1;
		str[i--] = '\0';
		while (i--)
		{
			str[i] = n % 10 + '0';
			n = n / 10;
		}
		str[i] = n + '0';
		return (str);
	}
	if (n == 0)
	{
		ft_calloc(2, 2);
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	return (0);
}

char *writter1(char *str, int n)
{
	int i;

	i = count(n);
	str[i--] = '\0';
	if (i--)
	{
		str[i--] = n / 10 + '0';
		n = n / 10;
	}
	str[i] = n + '0';
	return (str);
}

char *ft_itoa(int n)
{
	char *str;

	if (n ==  -2147483648)
	{
		str = ft_calloc(count(n), 1);
		ft_strlcpy(str, "-2147483648", 11);
	}
	else if (n == 0)
		writter(str, n);
	else if (n < 0)
	{
		str = ft_calloc(count(n), 1);
		writter(str, n);
	}

	else if (n > 0)
	{
		str = ft_calloc(count(n), 1);
		writter1(str, n);
	}
	return (str);
}

int main(void)
{
	int i =  -2147483648;
	char *result = ft_itoa(i);
	printf("the string is:%s\n", result);
	return (0);
}
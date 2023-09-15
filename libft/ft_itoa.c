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

//#include <libft.h>
#include <stdio.h>
#include <stdlib.h>

int	counter(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		i++;
		n = n * -1;
	}
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	i++;
	return (i);
}

int	isneg(int n)
{
	if (n < 0)
		return (-1);
	return (1);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = counter(n);
	str = (char *)malloc(j * sizeof(char) + 1);
	if (isneg(n) < 0)
		str[i] = '-';
	n = n * isneg(n);
	if (n == '\0')
		return (NULL);
	str[j] = '\0';
	j--;
	while (n > 9)
	{
		str[j] = n % 10 + '0';
		n = n / 10;
		j--;
	}
	if (n < 9)
		str[j] = n % 10 + '0';
	return (str);
}

/*int main(void)
{
	int		n = 123441;
	char	*result = ft_itoa(n);

	printf("the string is: %s\n", result);
	free(result);
	return (0);
}*/
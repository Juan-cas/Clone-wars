/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-cas <juan-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 04:30:39 by juan-cas          #+#    #+#             */
/*   Updated: 2023/09/13 04:30:39 by juan-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;

	if (!s || len == 0)
		return (NULL);
	if (ft_strlen(s) < len)
		len = 0;
	if (ft_strlen(s + start))
		len = ft_strlen(s + start);
	ptr = malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (0);
	ft_strlcpy(ptr, s + start, len + 1);
	return (ptr);
}

/*int main (void)
{
	char *str = "Hello World";
	unsigned int start = 1;
	size_t len = 10;
	char *result = ft_substr(str, start, len);
	printf("normal:%s\n", str);


	if (result)
	{
		printf("substring: %s\n", result);
	}
	else
	printf("Error: the string was not found.\n");
	return (0);
}*/
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

#include <libft.h>
#include <stdio.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i;
	size_t j;
	char *ptr;

	if(!s || len == 0)
		return (NULL);
	
	ptr = (char *)malloc(sizeof(len + 1));
	if (!ptr)
		return (NULL);
	i = start;
	j = 0;
	while (j < len && *s != '\0')
	{
		ptr[j] = s[i];
		i++;
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}

/*int main (void)
{
	char *str = "Hello World";
	unsigned int start = 2;
	size_t len = 5;
	char *result = ft_substr(str, start, len);
	printf("normal:%s\n", substr(str, start, len));


	if (result)
	{
		printf("substring: %s\n", result);
		free(result);
	}
	else
	printf("Error: the string was not found.\n");
	return (0);
}*/
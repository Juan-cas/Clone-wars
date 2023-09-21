/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-cas <juan-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 07:02:50 by juan-cas          #+#    #+#             */
/*   Updated: 2023/09/21 07:00:40 by juan-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static size_t	ft_toklen(const char *s, char c)
{
	size_t	ret;

	ret = 0;
	while (*s)
	{
		if (*s != c)
		{
			++ret;
			while (*s && *s != c)
				++s;
		}
		else
			++s;
	}
	return (ret);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	**str;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	str = malloc(sizeof(char *) * (ft_toklen(s, c) + 1));
	if (!str)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		k = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > k)
			str[j++] = ft_substr(s, k, i - k);
	}
	str[j] = 0;
	return (str);
}

/*int main(void)
{
	char *str = "Hello World How Are You Today";
	char c = ' ';
	char **result = ft_split(str, c);

	if (result == NULL)
	{
		printf("Error: Failed to split the string.\n");
		return (1);
	}

	printf("Split string:\n");
	for (int i = 0; result[i] != NULL; i++)
	{
		printf("Element %d: %s\n", i, result[i]);
	}

	// Free the memory allocated for the split string
	for (int i = 0; result[i] != NULL; i++)
	{
		free(result[i]);
	}
	free(result);

	return (0);
}*/
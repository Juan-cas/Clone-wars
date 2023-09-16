/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-cas <juan-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 03:25:56 by juan-cas          #+#    #+#             */
/*   Updated: 2023/09/12 03:25:56 by juan-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//# include "stdio.h"
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = s;
	while (n--)
		*ptr++ = c;
}

/*int main()
{
    char str[50];
    strcpy(str, "This is a test string");
    printf("Before: %s\n", str);
    
    ft_memset(str, '$', 7);
    
    printf("After: %s\n", str);
    
    return 0;
}*/
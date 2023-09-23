/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-cas <juan-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 21:21:24 by juan-cas          #+#    #+#             */
/*   Updated: 2023/09/23 23:40:53 by juan-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*holder;

	if (!lst || !new)
		return ;
	if (!(*lst))
		*lst = new;
	else
	{
		holder = *lst;
		while (holder->next)
			holder = holder->next;
		holder->next = new;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asid-ahm <asid-ahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:23:06 by asid-ahm          #+#    #+#             */
/*   Updated: 2024/04/28 13:57:46 by asid-ahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_back(t_stack **lst, t_stack **new1)
{
	if (*new1 != NULL && *lst != NULL)
	{
		// printf("here2\n");
		(*new1)->index = ft_lstsize(*lst);
		(*new1)->prev = ft_lstlast(*lst);
		ft_lstlast(*lst)->next = *new1;
	}
	if (*lst == NULL)
	{
		*lst = *new1;
		(*lst)->next = NULL;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisalah <louisalah@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:23:06 by asid-ahm          #+#    #+#             */
/*   Updated: 2024/03/10 23:24:26 by louisalah        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_back(t_stack **lst, t_stack **new)
{
	if (*lst == NULL)
		*lst = *new;
	if (*new != NULL && *lst != NULL)
	{
		(*new)->index = ft_lstsize(*lst);
		(*new)->prev = ft_lstlast(*lst);
		ft_lstlast(*lst)->next = *new;
	}
}

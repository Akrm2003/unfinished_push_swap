/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisalah <louisalah@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:51:40 by asid-ahm          #+#    #+#             */
/*   Updated: 2024/03/10 23:10:22 by louisalah        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_front(t_stack **lst, t_stack **new)
{
	if (*lst == NULL)
		*lst = *new;
	if (*new != NULL && *lst != NULL)
	{
		(*new)->next = *lst;
		(*lst)->prev = *new;
		while (*lst)
		{
			(*lst)->index++;
			*lst = (*lst)->next;
		}
		*lst = *new;
	}
}

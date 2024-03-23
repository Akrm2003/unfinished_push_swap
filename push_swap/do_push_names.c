/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_push_names.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisalah <louisalah@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 15:41:42 by louisalah         #+#    #+#             */
/*   Updated: 2024/03/11 15:52:36 by louisalah        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(t_stack **a, t_stack **b)
{
	push(a, b);
	printf("pa\n");
}

void	push_b(t_stack **b, t_stack **a)
{
	push(b, a);
	printf("pb\n");
}

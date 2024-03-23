/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisalah <louisalah@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 02:13:15 by louisalah         #+#    #+#             */
/*   Updated: 2024/03/23 01:50:25 by louisalah        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    four_algo(t_stack **a, t_stack **b)
{
    int smallest;

    smallest = find_smallest(*a);
    if (smallest < 2)
    {
        while (find_smallest(*a))
            rotate_a(a);
        push_a(a, b);
        small_sort(a);
        push_b(b, a);
    }
    else
    {
        while (find_smallest(*a))
            reverse_rotate_a(a);
        push_a(a, b);
        small_sort(a);
        push_b(b, a);
    }
}

void    five_algo(t_stack **a, t_stack **b)
{
    int size;

    size = ft_lstsize(*a);
    while ((*a)->right_index >= (size - 3))
        rotate_a(a);
    push_a(a, b);
    while ((*a)->right_index >= (size - 3))
        rotate_a(a);
    push_a(a, b);
    if ((*b)->content < (*b)->next->content && (*a)->content > (*b)->next->content)
        swap_ab(a, b);
    small_sort(a);
    if ((*b)->content < (*b)->next->content)
        swap_b(b);
    push_b(b, a);
    push_b(b, a);
}

void    big_algo(t_stack **a, t_stack **b, t_cheap wa)
{
    int aind;
    int bind;
	int	asize;
	int	bsize;
	
	asize = ft_lstsize(*a);
	bsize = ft_lstsize(*b);
    aind = wa.a_ind;
    bind = wa.b_ind;
    if (wa.case_number == 1) //remember to fix this method (its odd)
    {
        while (aind > 0 && bind > 0)
        {
            rotate_ab(a, b);
            aind--;
            bind--;
        }
        while (aind > 0)
        {
            aind--;
            rotate_a(a);
        }
        while (bind > 0)
        {
            bind--;
            rotate_b(b);
        }
		push_a(a, b);
    }
    else if (wa.case_number == 2)
    {
        while (aind < asize && bind < bsize)
        {
            reverse_rotate_ab(a, b);
            aind++;
            bind++;
        }
        while (aind < asize)
        {
            aind++;
            reverse_rotate_a(a);
        }
        while (bind < bsize)
        {
            bind++;
            reverse_rotate_b(b);
        }
		push_a(a, b);
    }
    else if (wa.case_number == 3)
    {
        while (aind > 0)
        {
            aind--;
            rotate_a(a);
        }
        while (bind < bsize)
        {
            bind++;
            reverse_rotate_b(b);
        }
		push_a(a, b);
    }
    else if (wa.case_number == 4)
    {
        while (bind > 0)
        {
            bind--;
            rotate_b(b);
        }
        while (aind < bsize)
        {
            aind++;
            reverse_rotate_a(a);
        }
		push_a(a, b);
    }
	// if ((*b)->content > (*b)->next->content)
	// 	rotate_b(b);
}
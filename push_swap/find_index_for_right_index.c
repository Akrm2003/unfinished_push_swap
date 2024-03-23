/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_index_for_right_index.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisalah <louisalah@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 20:28:11 by louisalah         #+#    #+#             */
/*   Updated: 2024/03/23 05:58:07 by louisalah        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int find_index_for_right_index(t_stack *a, int right_index)
{
    int index;

    index = -1;
    while (a)
    {
        if (a->right_index == right_index)
            return (a->index);
        a = a->next;
    }
    return (-1);
}

int find_right_index_after(t_stack *a, t_stack *b)
{
    int right_index_after;
    int right_index;

    right_index = a->right_index;
    // printf("right index check = %d\n", right_index);
    right_index_after = -1;
    while (b)
    {
        // printf("new right index check = %d\n", b->right_index);
        if (right_index > b->right_index && b->right_index > right_index_after)
            right_index_after = b->right_index;
        b = b->next;
    }
    // printf("a = %d && ria = %d\n", a->content, right_index_after);
    return (right_index_after);
}

// int mid(t_stack *a)
// {
//     return ((ft_lstsize(a) \ 2) + 1);
// }
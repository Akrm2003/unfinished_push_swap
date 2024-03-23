/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisalah <louisalah@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 13:44:46 by louisalah         #+#    #+#             */
/*   Updated: 2024/03/23 08:07:16 by louisalah        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fill_stack(t_stack **a, char **av)
{
	size_t	i;
	t_stack *temp;

	i = 2;
	*a = ft_lstnew(ft_atoi(av[1], a));
	while(av[i])
	{
		temp = ft_lstnew(ft_atoi(av[i], a));
		ft_lstadd_back(a, &temp);
		*a = (*a)->next;
		i++;
		(*a)->index = (i - 2);
	}
	*a = ft_lstfirst(*a);
}

void	check_dup(t_stack **a)
{
	t_stack	*temp;
	t_stack	*dup;

	temp = NULL;
	dup = *a;
	while (dup)
	{
		temp = dup;
		while (temp->next)
		{
			if (dup->content == temp->next->content)
				ft_exit(a);
			temp = temp->next;
		}
		dup = dup->next;
	}
	// free (dup);
	// free (temp);
}

void right_order_index(t_stack **a)
{
    int i;
    int n;
    int smallest_index;

    i = 0;
    n = 0;
    smallest_index = find_smallest(*a);
	// printf("smallest index = %d\n", smallest_index);
	// printf("size = %d\n", ft_lstsize(*a));
    while (n< ft_lstsize(*a))
    {
        while ((*a)->index != smallest_index)
            *a = (*a)->next;
        (*a)->right_index = n;
        (*a) = ft_lstfirst(*a);
        smallest_index = find_next_smallest(*a, smallest_index);
		// printf("small = %d\n", smallest_index);
        n++;
    }
	// (*a) = ft_lstfirst(*a);
}

int main(int ac, char **av)
{
	int		n;
	int		b_index;
	int		a_size;
	int		b_size;
	size_t	i;
    t_stack	*a;
    t_stack	*b;

	b = NULL;
	n = 0;
	b_index = 0;
	i = 1;
	if (ac >= 2)
	{
		fill_stack(&a, av);
		check_dup(&a);
		right_order_index(&a);
		if (ft_lstsize(a) == 5)
			five_algo(&a, &b);
		else if (ft_lstsize(a) == 4)
			four_algo(&a, &b);
		else if (ft_lstsize(a) <= 3)
			small_sort(&a);
		push_a (&a, &b);
		push_a (&a, &b);
		// push_a (&a, &b);
		// push_a (&a, &b);
		// push_a (&a, &b);
		// a = a->next;
		// printf("cheapest = %d\n", cheapest(a, b).moves);
		// printf("cheapest a = %d\n", cheapest(a, b).a_ind);
		// printf("cheapest b = %d\n", cheapest(a, b).b_ind);
		// printf("cheapest case num = %d\n", cheapest(a, b).case_number);
		// push_a (&a, &b);
		// push_a (&a, &b);
		a_size = ft_lstsize(a);
		b_size = ft_lstsize(b);
		while (a)
		{
			// printf("a[%d] = %d\n", a->right_index, a->content);
			// printf("cheapest = %d\n", cheapest(a, b).moves);
			// printf("cheapest a = %d\n", cheapest(a, b).a_ind);
			// printf("cheapest b = %d\n", cheapest(a, b).b_ind);
			// printf("cheapest case num = %d\n", cheapest(a, b).case_number);
			big_algo(&a, &b, cheapest(a, b));
			// big_algo(&a, &b, cheapest(a, b));
			// big_algo(&a, &b, cheapest(a, b));
		}
		// while (a)
		// {
		// 	n = find_right_index_after(a, b);
		// 	b_index = find_index_for_right_index(b, n);
		// 	printf("num of moves for a[%d] = %d\n", a->index, number_of_moves(a->index, b_index, a_size, b_size).moves);
		// 	a = a->next;
		// }
		// while (a && b)
		// {
		// 	printf("a[%d] = %d :::: b[%d] == %d\n", a->index, a->content, b->index, b->content);
		// 	// printf("a[%d] = %d :::: b[%d] == %d\n", a->right_index, a->content, b->right_index, b->content);
		// 	a = a->next;
		// 	b = b->next;
		// }
		// while (a)
		// {
		// 	printf("a[%d] = %d ::::b[] == \n", a->index, a->content);
		// 	a = a->next;
		// }
		// n = find_right_index_after(a, b);
		// printf("right index after = %d\n", n);
		// printf("right index index = %d\n", find_index_for_right_index(b, n));
		// while (a)
		// {
		// 	printf("a = %d\n", a->content);
		// 	a = a->next;
		// }
		// // printf("\n\n\n");
		while (b)
		{
			printf("b[%d] = %d\n",b->index, b->content);
			b = b->next;
		}
		// if (a && is_sorted(a))
		// 	printf("good job\n");
	}
}

// go check the header file for the idea of another struct;
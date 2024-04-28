/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asid-ahm <asid-ahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 13:44:46 by louisalah         #+#    #+#             */
/*   Updated: 2024/04/28 16:40:40 by asid-ahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fill_stack(t_stack **a, char **av)
{
	char	**pars;
	char 	*str;
	t_stack	*temp;
	size_t	i;

	str = NULL;
	i = 1;
	while (av[i])
		str = ft_strjoin(ft_strjoin(str, av[i++]), " ");
	pars = ft_split(str,' ');
	free (str);
	// if (ft_atoi(pars[0]) == 3147483647)
	// {
	// 	i = 0;
	// 	if(pars)
	// 	{
	// 		while (pars[i])
	// 			free (pars[i++]);		
	// 		free (pars);
	// 	}
	// 	write(2 ,"Error\n", 6);
	// 	exit (1);
	// }
	// *a = ft_lstnew(ft_atoi(pars[0]));
	i = 0;
	while (pars[i])
	{
		// printf ("i = %zu\n", i);
		if (ft_atoi(pars[i]) == 3147483647)
		{
			i = 0;
			if(pars)
			{
				while (pars[i])
					free (pars[i++]);		
				free (pars);
			}
			while (*a)
			{
				temp = *a;
				*a = (*a)->next;
				free (temp);
			}
			write(2 ,"Error\n", 6);
			exit (1);
		}
		temp = ft_lstnew(ft_atoi(pars[i]));
		// printf("here\n");
		ft_lstadd_back(a, &temp);
		// printf ("a = %d %d\n", temp->content, (*a)->content);
		i++;
	}
	if(pars)
	{
		i = 0;
		while (pars[i])
			free (pars[i++]);		
		free (pars);
	}
}

// void	fill_stack(t_stack **a, char **av)
// {
// 	size_t	i;
// 	size_t	n;
// 	size_t	x;
// 	t_stack *temp;
// 	char **split;

// 	split = NULL;
// 	i = 2;
// 	n = 0;
// 	if (av[1] && !av[1][0])
// 	{
// 		printf("Error");
// 		exit (1);
// 	}
// 	if (!strchr(av[1], ' '))
// 	{
// 		if (ft_atoi(av[1]) == 3147483647)
// 		{
// 			printf("invaalid num\n");
// 			exit (1);
// 		}
// 		*a = ft_lstnew(ft_atoi(av[1]));
// 	}
// 	else
// 	{
// 		x = 0;
//  		split = ft_split(av[1], ' ');
// 		if (!split || !split[0] || ft_atoi(split[0]) == 3147483647)
// 		{
// 			x = 0;
// 			if(split)
// 			{
// 				while (split[x])
// 					free (split[x++]);		
// 				free (split);
// 			}
// 			printf("Error1");
// 			exit (1);
// 		}
// 		*a = ft_lstnew(ft_atoi(split[x++]));
// 		while (split[x])
// 		{
// 			if (ft_atoi(split[x]) == 3147483647)
// 			{
// 				*a = ft_lstfirst(*a);
// 				while ((*a)->next)
// 				{
// 					*a = (*a)->next;
// 					free ((*a)->prev);
// 				}
// 				free (*a);
// 				x = 0;
// 				if(split)
// 				{
// 					while (split[x])
// 						free (split[x++]);		
// 					free (split);
// 				}
// 				printf("invaalid num\n");
// 				exit (1);
// 			}
// 			temp = ft_lstnew(ft_atoi(split[x]));
// 			ft_lstadd_back(a, &temp);
// 			*a = (*a)->next;
// 			n++;
// 			x++;
// 			(*a)->index = (n);
// 		}
// 	}
// 	while(av[i])
// 	{
// 		if (av[i] && !av[i][0])
// 		{
// 			printf("Error");
// 			exit (1);
// 		}
// 		if (!strchr(av[i], ' '))
// 		{
// 			if (ft_atoi(av[i]) == 3147483647)
// 			{
// 				*a = ft_lstfirst(*a);
// 				while ((*a)->next)
// 				{
// 					*a = (*a)->next;
// 					free ((*a)->prev);
// 				}
// 				free (*a);
// 				printf("invaalid num\n");
// 				exit (1);
// 			}
// 			temp = ft_lstnew(ft_atoi(av[i]));
// 			ft_lstadd_back(a, &temp);
// 			*a = (*a)->next;
// 			n++;
// 			(*a)->index = (n);
// 		}
// 		else
// 		{
// 			split = ft_split(av[i], ' ');
// 			x = 0;
// 			if (!split || !split[0])
// 			{
// 				printf("Error1");
// 				exit (1);
// 			}
// 			while (split[x])
// 			{
// 				if (ft_atoi(split[x]) == 3147483647)
// 				{
// 					*a = ft_lstfirst(*a);
// 					while ((*a)->next)
// 					{
// 						*a = (*a)->next;
// 						free ((*a)->prev);
// 					}
// 					free (*a);
// 					printf("invaalid num\n");
// 					x = 0;
// 					if(split)
// 					{
// 						while (split[x])
// 							free (split[x++]);		
// 						free (split);
// 						split = NULL;
// 					}
// 					exit (1);
// 				}
// 				temp = ft_lstnew(ft_atoi(split[x]));
// 				ft_lstadd_back(a, &temp);
// 				*a = (*a)->next;
// 				n++;
// 				x++;
// 				(*a)->index = (n);
// 			}
// 		}
		// x = 0;
		// if(split)
		// {
		// 	while (split[x])
		// 		free (split[x++]);		
		// 	free (split);
		// }
// 		i++;
// 	}
// 	*a = ft_lstfirst(*a);
// 	x = 0;
// 	// if(split)
// 	// {
// 	// 	while (split[x])
// 	// 		free (split[x++]);		
// 	// 	free (split);
// 	// }
// }

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
    int n;
    int smallest_index;

    n = 0;
    smallest_index = find_smallest(*a);
	// printf("smallest index = %d\n", smallest_index);
	// printf("size = %d\n", ft_lstsize(*a));
    while (n < ft_lstsize(*a))
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
    t_stack	*a;
    t_stack	*b;
    t_stack	*temp;
	int		a_size;
	int		b_size;
	int wa;

	a = NULL;
	b = NULL;
	chack_input(av);
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
		else
		{
			a_size = ft_lstsize(a);
			b_size = ft_lstsize(b);
			while (a->right_index >= (a_size - 3))
					rotate_a(&a);
				push_b(&a, &b);
				while (a->right_index >= (a_size - 3))
					rotate_a(&a);
				push_b(&a, &b);
			while (ft_lstsize(a) > 3)
				big_algo(&a, &b, cheapest(a, b, a_size));
			small_sort(&a);
			wa = b->right_index;
			b_size = ft_lstsize(b) / 2;
			while (b->right_index != (ft_lstsize(b) - 1))
			{
				if (wa < b_size)
					rotate_b(&b);
				else
					reverse_rotate_b(&b);
			}
			while (b)
				push_a(&b, &a);
		}
	}
	while (a)
	{
		temp = a;
		a = (a)->next;
		free (temp);
	}
}

// go check the header file for the idea of another struct;
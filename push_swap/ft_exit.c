/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisalah <louisalah@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 00:34:34 by louisalah         #+#    #+#             */
/*   Updated: 2024/03/11 00:34:57 by louisalah        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_exit(t_stack	**a)
{
	t_stack	*temp;

	temp = NULL;
	while (*a)
	{
		temp = *a;
		*a = (*a)->next;
		free (temp);
		temp = NULL;
	}
	printf("Error");
	exit (1);
}
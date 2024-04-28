/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asid-ahm <asid-ahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 08:10:52 by asid-ahm          #+#    #+#             */
/*   Updated: 2024/04/27 22:18:38 by asid-ahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	size_t	counter;
	char	*d;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (strdup(s2));
	if (!s2)
		return (strdup(s1));
	i = -1;
	counter = (strlen(s1) + strlen(s2));
	d = (char *)malloc((counter + 1));
	if (!d)
		return (NULL);
	counter = 0;
	while (s1[++i])
		d[i] = s1[i];
	while (s2[counter])
		d[i++] = s2[counter++];
	d[i] = '\0';
	free(s1);
	s1 = NULL;
	return (d);
}

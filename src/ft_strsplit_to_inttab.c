/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit_to_inttab.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolf <hwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 15:21:12 by hwolf             #+#    #+#             */
/*   Updated: 2020/01/22 17:46:01 by hwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

int	ft_strsplit_to_inttab(int **vector, char *string)
{
	char	**tab;
	int		size;
	int		i;

	i = 0;
	if (!string)
		return (0);
	tab = ft_strsplit(string, ' ');
	size = 0;
	while (tab[size])
		size++;
	if (!((*vector) = (int*)malloc(size * sizeof(int))))
		return (0);
	while (i < size)
	{
		(*vector)[i] = ft_atoi(tab[i]);
		ft_memdel((void**)&tab[i]);
		++i;
	}
	ft_memdel((void**)&tab);
	return (size);
}

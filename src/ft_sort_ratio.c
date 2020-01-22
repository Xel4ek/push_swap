/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_ratio.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolf <hwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 15:21:02 by hwolf             #+#    #+#             */
/*   Updated: 2020/01/22 18:50:32 by hwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_sort_ratio(const int *tab, size_t size)
{
	int res;
	int pivot;
	int i;
	int k;

	pivot = 0;
	res = 0;
	k = 0;
	i = -1;
	while (tab[++i] != -1 && i < (size - 1))
		if (tab[i] % 2 == 1)
		{
			if (pivot > tab[i])
				res += (tab[i] - pivot) * k;
			pivot = tab[i];
			k = 0;
		}
		else
			res += ft_abs(++k + pivot - tab[i]);
	while (i++ < (size - 2))
		if (tab[i] > tab[i + 1])
			res++;
		else
			res += ft_abs(tab[i + 1] - tab[i]);
	return (res);
}

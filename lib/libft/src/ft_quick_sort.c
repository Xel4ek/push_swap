/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quick_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolf <hwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 16:35:34 by hwolf             #+#    #+#             */
/*   Updated: 2020/01/22 16:58:04 by hwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_quick_sort_healper(int **pivot_left,
							int **pivot_right, int pivot)
{
	while (*pivot_left < *pivot_right)
	{
		while (**pivot_left < pivot)
			++(*pivot_left);
		while (pivot < **pivot_right)
			--(*pivot_right);
		if (*pivot_left <= *pivot_right)
		{
			if (**pivot_left > **pivot_right)
				ft_swap(*pivot_left, *pivot_right);
			++(*pivot_left);
			--(*pivot_right);
		}
	}
}

void		ft_quick_sort(int *start, int *finish)
{
	int *pivot_left;
	int *pivot_right;
	int pivot;

	pivot_left = start;
	pivot_right = finish;
	if (pivot_left < pivot_right)
	{
		pivot = *(start + (finish - start) / 2);
		ft_quick_sort_healper(&pivot_left, &pivot_right, pivot);
		if (pivot_left < finish)
			ft_quick_sort(pivot_left, finish);
		if (start < pivot_right)
			ft_quick_sort(start, pivot_right);
	}
}
